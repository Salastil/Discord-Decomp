package com.google.android.play.core.assetpacks;

import android.content.Context;
import android.os.Bundle;
import androidx.work.Worker;
import androidx.work.WorkerParameters;
import e4.l;
import k2.r;
import th.a;
import th.e1;
import th.j0;
import th.l0;
import th.m0;
import th.v0;
import uh.f;
import v3.g;
import v3.k;
import v3.m;
import v3.n;

/* loaded from: classes3.dex */
public final class ExtractionWorker extends Worker {

    /* renamed from: x, reason: collision with root package name */
    public final j0 f6173x;

    public ExtractionWorker(Context context, WorkerParameters workerParameters) {
        super(context, workerParameters);
        this.f6173x = (j0) ((f) m0.b(context).f7954i).a();
    }

    @Override // androidx.work.Worker
    public final n f() {
        v3.f fVar = this.f19207e.f2565b;
        j0 j0Var = this.f6173x;
        j0Var.getClass();
        r rVar = new r("session_bundle:", fVar);
        a.d(rVar);
        Bundle bundle = (Bundle) rVar.f13144v;
        try {
            v0 v0Var = j0Var.a;
            v0Var.getClass();
            if (((Boolean) v0Var.b(new l(22, v0Var, bundle))).booleanValue()) {
                j0Var.f18480b.a();
            }
            return new m(v3.f.f19202c);
        } catch (l0 e9) {
            j0.f18479d.b("Error while updating ExtractorSessionStoreView: %s", e9.getMessage());
            return new k();
        }
    }

    @Override // androidx.work.Worker
    public final g g() {
        v3.f fVar = this.f19207e.f2565b;
        e1 e1Var = this.f6173x.f18481c;
        r rVar = new r("notification_bundle:", fVar);
        a.c(rVar);
        Bundle bundle = (Bundle) rVar.f13144v;
        e1Var.b(bundle);
        return new g(-1883842196, e1Var.a(bundle), 0);
    }
}
