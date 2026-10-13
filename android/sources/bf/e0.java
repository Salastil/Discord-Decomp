package bf;

import android.content.ComponentName;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import com.discord.jank_stats.JankScreenContext;

/* loaded from: classes3.dex */
public final class e0 implements Handler.Callback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ f0 f2871d;

    public /* synthetic */ e0(f0 f0Var) {
        this.f2871d = f0Var;
    }

    @Override // android.os.Handler.Callback
    public final boolean handleMessage(Message message) {
        int i5 = message.what;
        if (i5 == 0) {
            f0 f0Var = this.f2871d;
            synchronized (f0Var.a) {
                try {
                    c0 c0Var = (c0) message.obj;
                    d0 d0Var = (d0) f0Var.a.get(c0Var);
                    if (d0Var != null && d0Var.f2857d.isEmpty()) {
                        if (d0Var.f2859i) {
                            c0 c0Var2 = d0Var.f2861w;
                            f0 f0Var2 = d0Var.f2863y;
                            f0Var2.f2876c.removeMessages(1, c0Var2);
                            f0Var2.f2877d.b(f0Var2.f2875b, d0Var);
                            d0Var.f2859i = false;
                            d0Var.f2858e = 2;
                        }
                        f0Var.a.remove(c0Var);
                    }
                } finally {
                }
            }
            return true;
        }
        if (i5 != 1) {
            return false;
        }
        f0 f0Var3 = this.f2871d;
        synchronized (f0Var3.a) {
            try {
                c0 c0Var3 = (c0) message.obj;
                d0 d0Var2 = (d0) f0Var3.a.get(c0Var3);
                if (d0Var2 != null && d0Var2.f2858e == 3) {
                    String valueOf = String.valueOf(c0Var3);
                    StringBuilder sb2 = new StringBuilder(valueOf.length() + 47);
                    sb2.append("Timeout waiting for ServiceConnection callback ");
                    sb2.append(valueOf);
                    Log.e("GmsClientSupervisor", sb2.toString(), new Exception());
                    ComponentName componentName = d0Var2.f2862x;
                    if (componentName == null) {
                        c0Var3.getClass();
                        componentName = null;
                    }
                    if (componentName == null) {
                        String str = c0Var3.f2848b;
                        t.g(str);
                        componentName = new ComponentName(str, JankScreenContext.UNKNOWN_SCREEN);
                    }
                    d0Var2.onServiceDisconnected(componentName);
                }
            } finally {
            }
        }
        return true;
    }
}
