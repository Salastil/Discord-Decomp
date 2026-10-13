package ki;

import android.app.Application;
import android.content.ComponentName;
import android.content.Context;
import android.content.IntentFilter;
import android.content.pm.PackageManager;
import android.content.pm.ServiceInfo;
import android.os.Bundle;
import android.os.Trace;
import android.util.Log;
import bf.t;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.firebase.FirebaseCommonRegistrar;
import com.google.firebase.components.ComponentDiscoveryService;
import com.google.firebase.concurrent.ExecutorsRegistrar;
import com.google.firebase.provider.FirebaseInitProvider;
import e4.r;
import ha.k;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;
import ni.m;

/* loaded from: classes3.dex */
public final class g {
    public static final Object j = new Object();
    public static final s.e k = new s.e(0);
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final String f13382b;

    /* renamed from: c, reason: collision with root package name */
    public final i f13383c;

    /* renamed from: d, reason: collision with root package name */
    public final ni.f f13384d;

    /* renamed from: g, reason: collision with root package name */
    public final m f13387g;

    /* renamed from: h, reason: collision with root package name */
    public final yi.a f13388h;

    /* renamed from: e, reason: collision with root package name */
    public final AtomicBoolean f13385e = new AtomicBoolean(false);

    /* renamed from: f, reason: collision with root package name */
    public final AtomicBoolean f13386f = new AtomicBoolean();

    /* renamed from: i, reason: collision with root package name */
    public final CopyOnWriteArrayList f13389i = new CopyOnWriteArrayList();

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v13, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v6, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v7, types: [java.util.List] */
    public g(Context context, String str, i iVar) {
        ?? arrayList;
        int i5 = 0;
        new CopyOnWriteArrayList();
        this.a = context;
        t.d(str);
        this.f13382b = str;
        this.f13383c = iVar;
        a aVar = FirebaseInitProvider.f6290d;
        Trace.beginSection("Firebase");
        Trace.beginSection("ComponentDiscovery");
        ArrayList arrayList2 = new ArrayList();
        Bundle bundle = null;
        try {
            PackageManager packageManager = context.getPackageManager();
            if (packageManager == null) {
                Log.w("ComponentDiscovery", "Context has no PackageManager.");
            } else {
                ServiceInfo serviceInfo = packageManager.getServiceInfo(new ComponentName(context, (Class<?>) ComponentDiscoveryService.class), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
                if (serviceInfo == null) {
                    Log.w("ComponentDiscovery", ComponentDiscoveryService.class + " has no service info.");
                } else {
                    bundle = serviceInfo.metaData;
                }
            }
        } catch (PackageManager.NameNotFoundException unused) {
            Log.w("ComponentDiscovery", "Application info not found.");
        }
        if (bundle == null) {
            Log.w("ComponentDiscovery", "Could not retrieve metadata, returning empty list of registrars.");
            arrayList = Collections.EMPTY_LIST;
        } else {
            arrayList = new ArrayList();
            for (String str2 : bundle.keySet()) {
                if ("com.google.firebase.components.ComponentRegistrar".equals(bundle.get(str2)) && str2.startsWith("com.google.firebase.components:")) {
                    arrayList.add(str2.substring(31));
                }
            }
        }
        Iterator it = arrayList.iterator();
        while (it.hasNext()) {
            arrayList2.add(new ni.d(i5, (String) it.next()));
        }
        Trace.endSection();
        Trace.beginSection("Runtime");
        oi.i iVar2 = oi.i.f15997d;
        ArrayList arrayList3 = new ArrayList();
        ArrayList arrayList4 = new ArrayList();
        arrayList3.addAll(arrayList2);
        int i6 = 1;
        arrayList3.add(new ni.d(i6, new FirebaseCommonRegistrar()));
        arrayList3.add(new ni.d(i6, new ExecutorsRegistrar()));
        arrayList4.add(ni.b.b(context, Context.class, new Class[0]));
        arrayList4.add(ni.b.b(this, g.class, new Class[0]));
        arrayList4.add(ni.b.b(iVar, i.class, new Class[0]));
        k kVar = new k(9);
        if (d9.a.A(context) && FirebaseInitProvider.f6291e.get()) {
            arrayList4.add(ni.b.b(aVar, a.class, new Class[0]));
        }
        ni.f fVar = new ni.f(arrayList3, arrayList4, kVar);
        this.f13384d = fVar;
        Trace.endSection();
        this.f13387g = new m(new c(i5, this, context));
        this.f13388h = fVar.e(wi.c.class);
        d dVar = new d(this);
        a();
        if (this.f13385e.get()) {
            af.c.f542w.f543d.get();
        }
        this.f13389i.add(dVar);
        Trace.endSection();
    }

    public static g b() {
        g gVar;
        synchronized (j) {
            try {
                gVar = (g) k.get("[DEFAULT]");
                if (gVar == null) {
                    throw new IllegalStateException("Default FirebaseApp is not initialized in this process " + gf.e.a() + ". Make sure to call FirebaseApp.initializeApp(Context) first.");
                }
                ((wi.c) gVar.f13388h.get()).b();
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return gVar;
    }

    public static g e(Context context) {
        synchronized (j) {
            try {
                if (k.containsKey("[DEFAULT]")) {
                    return b();
                }
                i a = i.a(context);
                if (a == null) {
                    Log.w("FirebaseApp", "Default FirebaseApp failed to initialize because no default options were found. This usually means that com.google.gms:google-services was not applied to your gradle project.");
                    return null;
                }
                return f(context, a);
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public static g f(Context context, i iVar) {
        g gVar;
        AtomicReference atomicReference = e.a;
        if (context.getApplicationContext() instanceof Application) {
            Application application = (Application) context.getApplicationContext();
            AtomicReference atomicReference2 = e.a;
            if (atomicReference2.get() == null) {
                e eVar = new e();
                while (true) {
                    if (atomicReference2.compareAndSet(null, eVar)) {
                        af.c.a(application);
                        af.c cVar = af.c.f542w;
                        cVar.getClass();
                        synchronized (cVar) {
                            cVar.f545i.add(eVar);
                        }
                        break;
                    }
                    if (atomicReference2.get() != null) {
                        break;
                    }
                }
            }
        }
        if (context.getApplicationContext() != null) {
            context = context.getApplicationContext();
        }
        synchronized (j) {
            s.e eVar2 = k;
            t.i("FirebaseApp name [DEFAULT] already exists!", !eVar2.containsKey("[DEFAULT]"));
            t.h(context, "Application context cannot be null.");
            gVar = new g(context, "[DEFAULT]", iVar);
            eVar2.put("[DEFAULT]", gVar);
        }
        gVar.d();
        return gVar;
    }

    public final void a() {
        t.i("FirebaseApp was deleted", !this.f13386f.get());
    }

    public final String c() {
        StringBuilder sb2 = new StringBuilder();
        a();
        sb2.append(gf.c.b(this.f13382b.getBytes(Charset.defaultCharset())));
        sb2.append("+");
        a();
        sb2.append(gf.c.b(this.f13383c.f13395b.getBytes(Charset.defaultCharset())));
        return sb2.toString();
    }

    public final void d() {
        HashMap hashMap;
        if (!d9.a.A(this.a)) {
            StringBuilder sb2 = new StringBuilder("Device in Direct Boot Mode: postponing initialization of Firebase APIs for app ");
            a();
            sb2.append(this.f13382b);
            Log.i("FirebaseApp", sb2.toString());
            Context context = this.a;
            AtomicReference atomicReference = f.f13381b;
            if (atomicReference.get() == null) {
                f fVar = new f(context);
                while (!atomicReference.compareAndSet(null, fVar)) {
                    if (atomicReference.get() != null) {
                        return;
                    }
                }
                context.registerReceiver(fVar, new IntentFilter("android.intent.action.USER_UNLOCKED"));
                return;
            }
            return;
        }
        StringBuilder sb3 = new StringBuilder("Device unlocked: initializing all Firebase APIs for app ");
        a();
        sb3.append(this.f13382b);
        Log.i("FirebaseApp", sb3.toString());
        ni.f fVar2 = this.f13384d;
        a();
        boolean equals = "[DEFAULT]".equals(this.f13382b);
        AtomicReference atomicReference2 = fVar2.f15492x;
        Boolean valueOf = Boolean.valueOf(equals);
        while (true) {
            if (atomicReference2.compareAndSet(null, valueOf)) {
                synchronized (fVar2) {
                    hashMap = new HashMap(fVar2.f15487d);
                }
                fVar2.a(hashMap, equals);
                break;
            } else if (atomicReference2.get() != null) {
                break;
            }
        }
        ((wi.c) this.f13388h.get()).b();
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof g)) {
            return false;
        }
        g gVar = (g) obj;
        gVar.a();
        return this.f13382b.equals(gVar.f13382b);
    }

    public final int hashCode() {
        return this.f13382b.hashCode();
    }

    public final String toString() {
        r rVar = new r(this);
        rVar.e(this.f13382b, StackTraceHelper.NAME_KEY);
        rVar.e(this.f13383c, "options");
        return rVar.toString();
    }
}
