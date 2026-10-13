package ve;

import android.os.Parcel;
import bf.t;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.BasePendingResult;
import ze.n;

/* loaded from: classes3.dex */
public final class g extends BasePendingResult {

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ int f19403f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(ze.l lVar, int i5) {
        super(lVar);
        this.f19403f = i5;
        t.h(lVar, "GoogleApiClient must not be null");
        t.h(re.a.a, "Api must not be null");
    }

    @Override // com.google.android.gms.common.api.internal.BasePendingResult
    public final /* bridge */ /* synthetic */ n M(Status status) {
        int i5 = this.f19403f;
        return status;
    }

    public final void N(ze.c cVar) {
        switch (this.f19403f) {
            case 0:
                e eVar = (e) cVar;
                k kVar = (k) eVar.o();
                f fVar = new f(this, 0);
                GoogleSignInOptions googleSignInOptions = eVar.V;
                Parcel r5 = kVar.r();
                int i5 = vf.f.a;
                r5.writeStrongBinder(fVar);
                vf.f.c(r5, googleSignInOptions);
                kVar.s(102, r5);
                break;
            default:
                e eVar2 = (e) cVar;
                k kVar2 = (k) eVar2.o();
                f fVar2 = new f(this, 1);
                GoogleSignInOptions googleSignInOptions2 = eVar2.V;
                Parcel r7 = kVar2.r();
                int i6 = vf.f.a;
                r7.writeStrongBinder(fVar2);
                vf.f.c(r7, googleSignInOptions2);
                kVar2.s(103, r7);
                break;
        }
    }

    public final void O(Status status) {
        t.a("Failed result must not be success", !(status.f5657d <= 0));
        setResult(M(status));
    }
}
