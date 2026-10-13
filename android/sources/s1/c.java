package s1;

import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import n1.h;
import o1.o;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17738d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f17739e;

    public /* synthetic */ c(h hVar, int i5) {
        this.f17738d = i5;
        this.f17739e = hVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f17738d;
        h hVar = this.f17739e;
        switch (i5) {
            case 0:
                hVar.onResult(null);
                break;
            case 1:
                CredentialProviderPlayServicesImpl.onSignalCredentialState$lambda$0(hVar);
                break;
            case 2:
                CredentialProviderPlayServicesImpl.onClearCredential$lambda$0$0(hVar);
                break;
            case 3:
                CredentialProviderPlayServicesImpl.onCreateCredential$lambda$0$0(hVar);
                break;
            case 4:
                hVar.onResult(null);
                break;
            case 5:
                hVar.onResult(null);
                break;
            case 6:
                CredentialProviderPlayServicesImpl.onGetCredential$lambda$1$0(hVar);
                break;
            case 7:
                CredentialProviderPlayServicesImpl.onGetCredential$lambda$0$0(hVar);
                break;
            case 8:
                hVar.e(new o("No provider data returned."));
                break;
            case 9:
                hVar.e(new o1.h(null));
                break;
            case 10:
                hVar.e(new o1.h(null));
                break;
            case 11:
                hVar.e(new o("Failed to launch the selector UI. Hint: ensure the `context` parameter is an Activity-based context."));
                break;
            default:
                int i6 = q1.c.f16651d;
                hVar.e(new q1.c("androidx.credentials.SignalCredentialStateException.TYPE_UNKNOWN", "No SignalCredentialStateResponse received"));
                break;
        }
    }
}
