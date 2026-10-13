package androidx.work.impl.background.systemalarm;

import a5.s;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import v3.p;
import w3.o;

/* loaded from: classes.dex */
public class ConstraintProxyUpdateReceiver extends BroadcastReceiver {
    public static final String a = p.f("ConstrntProxyUpdtRecvr");

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        String action = intent != null ? intent.getAction() : null;
        if ("androidx.work.impl.background.systemalarm.UpdateProxies".equals(action)) {
            o.a(context).f19663d.a(new s(intent, context, goAsync(), 15));
            return;
        }
        p.d().a(a, "Ignoring unknown action " + action);
    }
}
