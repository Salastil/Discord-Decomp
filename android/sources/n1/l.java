package n1;

import android.credentials.CreateCredentialException;
import android.credentials.CreateCredentialResponse;
import android.credentials.Credential;
import android.credentials.GetCredentialException;
import android.credentials.GetCredentialResponse;
import android.os.Bundle;
import android.os.OutcomeReceiver;
import android.util.Log;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class l implements OutcomeReceiver {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ h f14722b;

    public l(ha.l lVar, m mVar) {
        this.f14722b = lVar;
    }

    public final void onError(Throwable th2) {
        switch (this.a) {
            case 0:
                CreateCredentialException error = (CreateCredentialException) th2;
                Intrinsics.checkNotNullParameter(error, "error");
                Log.i("CredManProvService", "CreateCredentialResponse error returned from framework");
                gj.c cVar = (gj.c) this.f14722b;
                Intrinsics.checkNotNullParameter(error, "error");
                String type = error.getType();
                Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                cVar.e(io.sentry.config.a.M(error.getMessage(), type));
                break;
            default:
                GetCredentialException error2 = (GetCredentialException) th2;
                Intrinsics.checkNotNullParameter(error2, "error");
                Log.i("CredManProvService", "GetCredentialResponse error returned from framework");
                ha.l lVar = (ha.l) this.f14722b;
                Intrinsics.checkNotNullParameter(error2, "error");
                String type2 = error2.getType();
                Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
                lVar.e(io.sentry.config.a.N(error2.getMessage(), type2));
                break;
        }
    }

    public final void onResult(Object obj) {
        switch (this.a) {
            case 0:
                CreateCredentialResponse response = (CreateCredentialResponse) obj;
                Intrinsics.checkNotNullParameter(response, "response");
                Log.i("CredManProvService", "Create Result returned from framework: ");
                gj.c cVar = (gj.c) this.f14722b;
                Bundle data = response.getData();
                Intrinsics.checkNotNullExpressionValue(data, "getData(...)");
                cVar.onResult(nf.e.g("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL", data));
                break;
            default:
                GetCredentialResponse response2 = (GetCredentialResponse) obj;
                Intrinsics.checkNotNullParameter(response2, "response");
                Log.i("CredManProvService", "GetCredentialResponse returned from framework");
                ha.l lVar = (ha.l) this.f14722b;
                Intrinsics.checkNotNullParameter(response2, "response");
                Credential credential = response2.getCredential();
                Intrinsics.checkNotNullExpressionValue(credential, "getCredential(...)");
                String type = credential.getType();
                Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
                Bundle data2 = credential.getData();
                Intrinsics.checkNotNullExpressionValue(data2, "getData(...)");
                lVar.onResult(new q(nt.a.i(type, data2)));
                break;
        }
    }

    public l(gj.c cVar, e eVar, m mVar) {
        this.f14722b = cVar;
    }
}
