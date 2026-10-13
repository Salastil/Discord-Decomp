package s1;

import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import n1.h;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17735d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Executor f17736e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ h f17737i;

    public /* synthetic */ b(Executor executor, h hVar, int i5) {
        this.f17735d = i5;
        this.f17736e = executor;
        this.f17737i = hVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit onGetCredential$lambda$0;
        Unit onClearCredential$lambda$4$0;
        Unit runFallbackClearCredFlow$lambda$0$0;
        Unit onClearCredential$lambda$1$0;
        switch (this.f17735d) {
            case 0:
                onGetCredential$lambda$0 = CredentialProviderPlayServicesImpl.onGetCredential$lambda$0(this.f17736e, this.f17737i);
                break;
            case 1:
                onClearCredential$lambda$4$0 = CredentialProviderPlayServicesImpl.onClearCredential$lambda$4$0(this.f17736e, this.f17737i);
                break;
            case 2:
                runFallbackClearCredFlow$lambda$0$0 = CredentialProviderPlayServicesImpl.runFallbackClearCredFlow$lambda$0$0(this.f17736e, this.f17737i);
                break;
            case 3:
                onClearCredential$lambda$1$0 = CredentialProviderPlayServicesImpl.onClearCredential$lambda$1$0(this.f17736e, this.f17737i);
                break;
            case 4:
                this.f17736e.execute(new c(this.f17737i, 8));
                break;
            case 5:
                this.f17736e.execute(new c(this.f17737i, 10));
                break;
            case 6:
                this.f17736e.execute(new c(this.f17737i, 9));
                break;
            default:
                this.f17736e.execute(new c(this.f17737i, 11));
                break;
        }
        return Unit.a;
    }
}
