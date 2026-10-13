package bf;

import android.app.PendingIntent;
import android.os.Bundle;
import android.os.Looper;
import android.os.Message;
import android.text.TextUtils;
import android.util.Log;

/* loaded from: classes3.dex */
public final class w extends fg.a {
    public final /* synthetic */ e a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public w(e eVar, Looper looper) {
        super(looper, 3);
        this.a = eVar;
    }

    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        Boolean bool;
        r rVar;
        e eVar = this.a;
        if (eVar.S.get() != message.arg1) {
            int i5 = message.what;
            if ((i5 == 2 || i5 == 1 || i5 == 7) && (rVar = (r) message.obj) != null) {
                synchronized (rVar) {
                    rVar.a = null;
                }
                e eVar2 = rVar.f2914c;
                synchronized (eVar2.H) {
                    eVar2.H.remove(rVar);
                }
                return;
            }
            return;
        }
        int i6 = message.what;
        if ((i6 == 1 || i6 == 7 || i6 == 4 || i6 == 5) && !eVar.c()) {
            r rVar2 = (r) message.obj;
            if (rVar2 != null) {
                synchronized (rVar2) {
                    rVar2.a = null;
                }
                e eVar3 = rVar2.f2914c;
                synchronized (eVar3.H) {
                    eVar3.H.remove(rVar2);
                }
                return;
            }
            return;
        }
        int i10 = message.what;
        if (i10 == 4) {
            eVar.P = new ye.b(message.arg2, null, null);
            if (!eVar.Q && !TextUtils.isEmpty(eVar.p()) && !TextUtils.isEmpty(null)) {
                try {
                    Class.forName(eVar.p());
                    if (!eVar.Q) {
                        eVar.u(3, null);
                        return;
                    }
                } catch (ClassNotFoundException unused) {
                }
            }
            ye.b bVar = eVar.P;
            if (bVar == null) {
                bVar = new ye.b(8, null, null);
            }
            eVar.F.f(bVar);
            System.currentTimeMillis();
            return;
        }
        if (i10 == 5) {
            ye.b bVar2 = eVar.P;
            if (bVar2 == null) {
                bVar2 = new ye.b(8, null, null);
            }
            eVar.F.f(bVar2);
            System.currentTimeMillis();
            return;
        }
        if (i10 == 3) {
            Object obj = message.obj;
            eVar.F.f(new ye.b(message.arg2, obj instanceof PendingIntent ? (PendingIntent) obj : null, null));
            System.currentTimeMillis();
            return;
        }
        if (i10 == 6) {
            eVar.u(5, null);
            h hVar = eVar.K;
            if (hVar != null) {
                ((ze.j) hVar.a).k(message.arg2);
            }
            System.currentTimeMillis();
            eVar.t(5, 1, null);
            return;
        }
        if (i10 == 2 && !eVar.isConnected()) {
            r rVar3 = (r) message.obj;
            if (rVar3 != null) {
                synchronized (rVar3) {
                    rVar3.a = null;
                }
                e eVar4 = rVar3.f2914c;
                synchronized (eVar4.H) {
                    eVar4.H.remove(rVar3);
                }
                return;
            }
            return;
        }
        int i11 = message.what;
        if (i11 != 2 && i11 != 1 && i11 != 7) {
            StringBuilder sb2 = new StringBuilder(String.valueOf(i11).length() + 34);
            sb2.append("Don't know how to handle message: ");
            sb2.append(i11);
            Log.wtf("GmsClient", sb2.toString(), new Exception());
            return;
        }
        r rVar4 = (r) message.obj;
        synchronized (rVar4) {
            try {
                bool = rVar4.a;
                if (rVar4.f2913b) {
                    String obj2 = rVar4.toString();
                    StringBuilder sb3 = new StringBuilder(obj2.length() + 47);
                    sb3.append("Callback proxy ");
                    sb3.append(obj2);
                    sb3.append(" being reused. This is not safe.");
                    Log.w("GmsClient", sb3.toString());
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (bool != null) {
            e eVar5 = rVar4.f2917f;
            int i12 = rVar4.f2915d;
            if (i12 != 0) {
                eVar5.u(1, null);
                Bundle bundle = rVar4.f2916e;
                rVar4.b(new ye.b(i12, bundle != null ? (PendingIntent) bundle.getParcelable("pendingIntent") : null, null));
            } else if (!rVar4.a()) {
                eVar5.u(1, null);
                rVar4.b(new ye.b(8, null, null));
            }
        }
        synchronized (rVar4) {
            rVar4.f2913b = true;
        }
        synchronized (rVar4) {
            rVar4.a = null;
        }
        e eVar6 = rVar4.f2914c;
        synchronized (eVar6.H) {
            eVar6.H.remove(rVar4);
        }
    }
}
