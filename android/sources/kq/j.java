package kq;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class j implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13621d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final ip.f f13622e;

    public j(ip.f fVar, wp.f fVar2, c0 c0Var, wp.a aVar) {
        this.f13622e = fVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        boolean z5;
        switch (this.f13621d) {
            case 0:
                ip.d dVar = (ip.d) obj;
                if (!ip.q.e(dVar.getVisibility())) {
                    ip.f fVar = this.f13622e;
                    if (fVar == null) {
                        ip.q.a(3);
                        throw null;
                    }
                    if (ip.q.c(ip.q.f12164l, dVar, fVar) == null) {
                        z5 = true;
                        return Boolean.valueOf(z5);
                    }
                }
                z5 = false;
                return Boolean.valueOf(z5);
            default:
                zq.f kotlinTypeRefiner = (zq.f) obj;
                Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
                hq.b classId = oq.e.f(this.f13622e);
                if (classId == null) {
                    return null;
                }
                kotlinTypeRefiner.getClass();
                Intrinsics.checkNotNullParameter(classId, "classId");
                return null;
        }
    }

    public j(ip.f fVar) {
        this.f13622e = fVar;
    }
}
