package w1;

import android.content.Context;
import android.os.CancellationSignal;
import android.util.Log;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import n1.h;
import n1.i;
import n1.p;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements jg.c {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19607d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f19608e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Executor f19609i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ CancellationSignal f19610v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f19611w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ t1.d f19612x;

    public /* synthetic */ c(Object obj, t1.d dVar, h hVar, Executor executor, CancellationSignal cancellationSignal, int i5) {
        this.f19607d = i5;
        this.f19611w = obj;
        this.f19612x = dVar;
        this.f19608e = hVar;
        this.f19609i = executor;
        this.f19610v = cancellationSignal;
    }

    @Override // jg.c
    public final void onFailure(Exception e9) {
        switch (this.f19607d) {
            case 0:
                n1.e eVar = (n1.e) this.f19611w;
                e eVar2 = (e) this.f19612x;
                Intrinsics.checkNotNullParameter(e9, "e");
                eVar.getClass();
                Log.w("CreatePublicKey", "Pre-u credman PK create flow failed " + e9 + "; retrying with gis flow");
                Context context = eVar2.f19615e;
                Intrinsics.checkNotNullParameter(context, "context");
                new v1.h(context).g(eVar, this.f19608e, this.f19609i, this.f19610v);
                break;
            default:
                p request = (p) this.f19611w;
                x1.a aVar = (x1.a) this.f19612x;
                Intrinsics.checkNotNullParameter(e9, "e");
                CredentialProviderPlayServicesImpl.Companion.getClass();
                Intrinsics.checkNotNullParameter(request, "request");
                for (i iVar : request.a) {
                }
                Log.w("GetCredentialController", "Pre-u credman get flow failed; retrying with gis flow");
                new u1.d(aVar.f20244e).h(request, this.f19610v, this.f19609i, this.f19608e);
                break;
        }
    }
}
