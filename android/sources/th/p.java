package th;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import com.google.android.play.core.assetpacks.AssetPackState;
import java.util.ArrayList;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final class p extends uh.n {

    /* renamed from: g, reason: collision with root package name */
    public final v0 f18545g;

    /* renamed from: h, reason: collision with root package name */
    public final n0 f18546h;

    /* renamed from: i, reason: collision with root package name */
    public final c0 f18547i;
    public final p0 j;
    public final g1 k;

    /* renamed from: l, reason: collision with root package name */
    public final Handler f18548l;

    /* renamed from: m, reason: collision with root package name */
    public final uh.f f18549m;

    /* renamed from: n, reason: collision with root package name */
    public final uh.f f18550n;

    /* renamed from: o, reason: collision with root package name */
    public final uh.f f18551o;

    public p(Context context, v0 v0Var, n0 n0Var, uh.f fVar, p0 p0Var, c0 c0Var, uh.f fVar2, uh.f fVar3, g1 g1Var) {
        super(new a5.m("AssetPackServiceListenerRegistry", 3), new IntentFilter("com.google.android.play.core.assetpacks.receiver.ACTION_SESSION_UPDATE"), context);
        this.f18548l = new Handler(Looper.getMainLooper());
        this.f18545g = v0Var;
        this.f18546h = n0Var;
        this.f18549m = fVar;
        this.j = p0Var;
        this.f18547i = c0Var;
        this.f18550n = fVar2;
        this.f18551o = fVar3;
        this.k = g1Var;
    }

    @Override // uh.n
    public final void b(Intent intent) {
        Bundle bundleExtra = intent.getBundleExtra("com.google.android.play.core.FLAGS");
        if (bundleExtra == null || !bundleExtra.getBoolean("enableWorkManager")) {
            Bundle bundleExtra2 = intent.getBundleExtra("com.google.android.play.core.assetpacks.receiver.EXTRA_SESSION_STATE");
            a5.m mVar = this.a;
            if (bundleExtra2 == null) {
                mVar.b("Empty bundle received from broadcast.", new Object[0]);
                return;
            }
            ArrayList<String> stringArrayList = bundleExtra2.getStringArrayList("pack_names");
            if (stringArrayList == null || stringArrayList.size() != 1) {
                mVar.b("Corrupt bundle received from broadcast.", new Object[0]);
                return;
            }
            w d6 = AssetPackState.d(bundleExtra2, stringArrayList.get(0), this.j, this.k, new r8.c(17));
            mVar.a("ListenerRegistryBroadcastReceiver.onReceive: %s", d6);
            if (((PendingIntent) bundleExtra2.getParcelable("confirmation_intent")) != null) {
                this.f18547i.getClass();
            }
            ((Executor) this.f18551o.a()).execute(new a5.s(this, bundleExtra2, d6, 11));
            ((Executor) this.f18550n.a()).execute(new ii.o(19, this, bundleExtra2));
        }
    }
}
