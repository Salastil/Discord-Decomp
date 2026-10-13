package x0;

import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.content.pm.ResolveInfo;
import android.content.pm.ServiceInfo;
import android.os.DeadObjectException;
import android.os.Handler;
import android.os.HandlerThread;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Message;
import android.os.RemoteException;
import android.provider.Settings;
import android.util.Log;
import androidx.core.app.NotificationManagerCompat;
import java.util.ArrayDeque;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* loaded from: classes.dex */
public final class b1 implements Handler.Callback, ServiceConnection {

    /* renamed from: d, reason: collision with root package name */
    public final Context f20179d;

    /* renamed from: e, reason: collision with root package name */
    public final Handler f20180e;

    /* renamed from: i, reason: collision with root package name */
    public final HashMap f20181i = new HashMap();

    /* renamed from: v, reason: collision with root package name */
    public HashSet f20182v = new HashSet();

    public b1(Context context) {
        this.f20179d = context;
        HandlerThread handlerThread = new HandlerThread("NotificationManagerCompat");
        handlerThread.start();
        this.f20180e = new Handler(handlerThread.getLooper(), this);
    }

    public final void a(a1 a1Var) {
        boolean z5;
        ArrayDeque arrayDeque = a1Var.f20171d;
        ComponentName componentName = a1Var.a;
        if (Log.isLoggable("NotifManCompat", 3)) {
            Log.d("NotifManCompat", "Processing component " + componentName + ", " + arrayDeque.size() + " queued tasks");
        }
        if (arrayDeque.isEmpty()) {
            return;
        }
        if (a1Var.f20169b) {
            z5 = true;
        } else {
            Intent component = new Intent("android.support.BIND_NOTIFICATION_SIDE_CHANNEL").setComponent(componentName);
            Context context = this.f20179d;
            boolean bindService = context.bindService(component, this, 33);
            a1Var.f20169b = bindService;
            if (bindService) {
                a1Var.f20172e = 0;
            } else {
                Log.w("NotifManCompat", "Unable to bind to listener " + componentName);
                context.unbindService(this);
            }
            z5 = a1Var.f20169b;
        }
        if (!z5 || a1Var.f20170c == null) {
            b(a1Var);
            return;
        }
        while (true) {
            y0 y0Var = (y0) arrayDeque.peek();
            if (y0Var == null) {
                break;
            }
            try {
                if (Log.isLoggable("NotifManCompat", 3)) {
                    Log.d("NotifManCompat", "Sending task " + y0Var);
                }
                y0Var.a(a1Var.f20170c);
                arrayDeque.remove();
            } catch (DeadObjectException unused) {
                if (Log.isLoggable("NotifManCompat", 3)) {
                    Log.d("NotifManCompat", "Remote service has died: " + componentName);
                }
            } catch (RemoteException e9) {
                Log.w("NotifManCompat", "RemoteException communicating with " + componentName, e9);
            }
        }
        if (arrayDeque.isEmpty()) {
            return;
        }
        b(a1Var);
    }

    public final void b(a1 a1Var) {
        ComponentName componentName = a1Var.a;
        ArrayDeque arrayDeque = a1Var.f20171d;
        Handler handler = this.f20180e;
        if (handler.hasMessages(3, componentName)) {
            return;
        }
        int i5 = a1Var.f20172e;
        int i6 = i5 + 1;
        a1Var.f20172e = i6;
        if (i6 <= 6) {
            int i10 = (1 << i5) * 1000;
            if (Log.isLoggable("NotifManCompat", 3)) {
                Log.d("NotifManCompat", "Scheduling retry for " + i10 + " ms");
            }
            handler.sendMessageDelayed(handler.obtainMessage(3, componentName), i10);
            return;
        }
        Log.w("NotifManCompat", "Giving up on delivering " + arrayDeque.size() + " tasks to " + componentName + " after " + a1Var.f20172e + " retries");
        arrayDeque.clear();
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        HashSet hashSet;
        int i5 = message.what;
        c.c cVar = null;
        if (i5 == 0) {
            y0 y0Var = (y0) message.obj;
            Context context = this.f20179d;
            Object obj = NotificationManagerCompat.f1475c;
            String string = Settings.Secure.getString(context.getContentResolver(), "enabled_notification_listeners");
            synchronized (NotificationManagerCompat.f1475c) {
                if (string != null) {
                    try {
                        if (!string.equals(NotificationManagerCompat.f1476d)) {
                            String[] split = string.split(":", -1);
                            HashSet hashSet2 = new HashSet(split.length);
                            for (String str : split) {
                                ComponentName unflattenFromString = ComponentName.unflattenFromString(str);
                                if (unflattenFromString != null) {
                                    hashSet2.add(unflattenFromString.getPackageName());
                                }
                            }
                            NotificationManagerCompat.f1477e = hashSet2;
                            NotificationManagerCompat.f1476d = string;
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                hashSet = NotificationManagerCompat.f1477e;
            }
            if (!hashSet.equals(this.f20182v)) {
                this.f20182v = hashSet;
                List<ResolveInfo> queryIntentServices = this.f20179d.getPackageManager().queryIntentServices(new Intent().setAction("android.support.BIND_NOTIFICATION_SIDE_CHANNEL"), 0);
                HashSet hashSet3 = new HashSet();
                for (ResolveInfo resolveInfo : queryIntentServices) {
                    if (hashSet.contains(resolveInfo.serviceInfo.packageName)) {
                        ServiceInfo serviceInfo = resolveInfo.serviceInfo;
                        ComponentName componentName = new ComponentName(serviceInfo.packageName, serviceInfo.name);
                        if (resolveInfo.serviceInfo.permission != null) {
                            Log.w("NotifManCompat", "Permission present on component " + componentName + ", not adding listener record.");
                        } else {
                            hashSet3.add(componentName);
                        }
                    }
                }
                Iterator it = hashSet3.iterator();
                while (it.hasNext()) {
                    ComponentName componentName2 = (ComponentName) it.next();
                    if (!this.f20181i.containsKey(componentName2)) {
                        if (Log.isLoggable("NotifManCompat", 3)) {
                            Log.d("NotifManCompat", "Adding listener record for " + componentName2);
                        }
                        this.f20181i.put(componentName2, new a1(componentName2));
                    }
                }
                Iterator it2 = this.f20181i.entrySet().iterator();
                while (it2.hasNext()) {
                    Map.Entry entry = (Map.Entry) it2.next();
                    if (!hashSet3.contains(entry.getKey())) {
                        if (Log.isLoggable("NotifManCompat", 3)) {
                            Log.d("NotifManCompat", "Removing listener record for " + entry.getKey());
                        }
                        a1 a1Var = (a1) entry.getValue();
                        if (a1Var.f20169b) {
                            this.f20179d.unbindService(this);
                            a1Var.f20169b = false;
                        }
                        a1Var.f20170c = null;
                        it2.remove();
                    }
                }
            }
            for (a1 a1Var2 : this.f20181i.values()) {
                a1Var2.f20171d.add(y0Var);
                a(a1Var2);
            }
        } else if (i5 == 1) {
            z0 z0Var = (z0) message.obj;
            ComponentName componentName3 = z0Var.a;
            IBinder iBinder = z0Var.f20243b;
            a1 a1Var3 = (a1) this.f20181i.get(componentName3);
            if (a1Var3 != null) {
                int i6 = c.b.f3265f;
                if (iBinder != null) {
                    IInterface queryLocalInterface = iBinder.queryLocalInterface(c.c.f3266d);
                    if (queryLocalInterface == null || !(queryLocalInterface instanceof c.c)) {
                        c.a aVar = new c.a();
                        aVar.f3264f = iBinder;
                        cVar = aVar;
                    } else {
                        cVar = (c.c) queryLocalInterface;
                    }
                }
                a1Var3.f20170c = cVar;
                a1Var3.f20172e = 0;
                a(a1Var3);
                return true;
            }
        } else if (i5 == 2) {
            a1 a1Var4 = (a1) this.f20181i.get((ComponentName) message.obj);
            if (a1Var4 != null) {
                if (a1Var4.f20169b) {
                    this.f20179d.unbindService(this);
                    a1Var4.f20169b = false;
                }
                a1Var4.f20170c = null;
                return true;
            }
        } else {
            if (i5 != 3) {
                return false;
            }
            a1 a1Var5 = (a1) this.f20181i.get((ComponentName) message.obj);
            if (a1Var5 != null) {
                a(a1Var5);
                return true;
            }
        }
        return true;
    }

    @Override // android.content.ServiceConnection
    public final void onServiceConnected(ComponentName componentName, IBinder iBinder) {
        if (Log.isLoggable("NotifManCompat", 3)) {
            Log.d("NotifManCompat", "Connected to service " + componentName);
        }
        this.f20180e.obtainMessage(1, new z0(componentName, iBinder)).sendToTarget();
    }

    @Override // android.content.ServiceConnection
    public final void onServiceDisconnected(ComponentName componentName) {
        if (Log.isLoggable("NotifManCompat", 3)) {
            Log.d("NotifManCompat", "Disconnected from service " + componentName);
        }
        this.f20180e.obtainMessage(2, componentName).sendToTarget();
    }
}
