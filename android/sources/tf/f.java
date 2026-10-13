package tf;

import com.google.android.gms.common.api.Status;
import kotlin.jvm.internal.Intrinsics;
import ks.n;
import sf.m;
import sf.s;

/* loaded from: classes3.dex */
public final class f extends ag.a implements a {

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f18362g;

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ jg.g f18363h;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(jg.g gVar, int i5) {
        super(2);
        this.f18362g = i5;
        this.f18363h = gVar;
        attachInterface(this, "com.google.android.gms.identitycredentials.internal.IIdentityCredentialCallbacks");
    }

    @Override // tf.a
    public void a(Status status, s sVar) {
        switch (this.f18362g) {
            case 2:
                Intrinsics.checkNotNullParameter(status, "status");
                n.x(status, sVar, this.f18363h);
                return;
            default:
                Intrinsics.checkNotNullParameter(status, "status");
                throw new UnsupportedOperationException();
        }
    }

    @Override // tf.a
    public void l(Status status, sf.b bVar) {
        Intrinsics.checkNotNullParameter(status, "status");
        throw new UnsupportedOperationException();
    }

    @Override // tf.a
    public void m(Status status, sf.f fVar) {
        switch (this.f18362g) {
            case 0:
                Intrinsics.checkNotNullParameter(status, "status");
                n.x(status, fVar, this.f18363h);
                return;
            default:
                Intrinsics.checkNotNullParameter(status, "status");
                throw new UnsupportedOperationException();
        }
    }

    @Override // tf.a
    public void q(Status status, m mVar) {
        switch (this.f18362g) {
            case 1:
                Intrinsics.checkNotNullParameter(status, "status");
                n.x(status, mVar, this.f18363h);
                return;
            default:
                Intrinsics.checkNotNullParameter(status, "status");
                throw new UnsupportedOperationException();
        }
    }
}
