package n1;

import android.content.Context;
import android.credentials.CreateCredentialRequest;
import android.credentials.CredentialManager;
import android.credentials.CredentialOption;
import android.credentials.GetCredentialRequest;
import android.graphics.drawable.Icon;
import android.os.Build;
import android.os.Bundle;
import android.os.CancellationSignal;
import android.text.TextUtils;
import com.discord.R;
import java.util.concurrent.Executor;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m implements j {
    public final CredentialManager a;

    public m(Context context) {
        Intrinsics.checkNotNullParameter(context, "context");
        this.a = (CredentialManager) context.getSystemService("credential");
    }

    @Override // n1.j
    public final boolean isAvailableOnDevice() {
        return Build.VERSION.SDK_INT >= 34 && this.a != null;
    }

    @Override // n1.j
    public final void onCreateCredential(Context context, b request, CancellationSignal cancellationSignal, Executor executor, h callback) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        gj.c cVar = (gj.c) callback;
        CredentialManager credentialManager = this.a;
        if (credentialManager == null) {
            cVar.e(new o1.i("Your device doesn't support credential manager"));
            Unit unit = Unit.a;
            return;
        }
        l lVar = new l(cVar, (e) request, this);
        Intrinsics.checkNotNull(credentialManager);
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(context, "context");
        Bundle bundle = request.a;
        e4.l lVar2 = request.f14713c;
        Bundle bundle2 = new Bundle();
        bundle2.putCharSequence("androidx.credentials.BUNDLE_KEY_USER_ID", (CharSequence) lVar2.f7959e);
        CharSequence charSequence = (CharSequence) lVar2.f7960i;
        if (!TextUtils.isEmpty(charSequence)) {
            bundle2.putCharSequence("androidx.credentials.BUNDLE_KEY_USER_DISPLAY_NAME", charSequence);
        }
        if (!TextUtils.isEmpty(null)) {
            bundle2.putString("androidx.credentials.BUNDLE_KEY_DEFAULT_PROVIDER", null);
        }
        bundle2.putParcelable("androidx.credentials.BUNDLE_KEY_CREDENTIAL_TYPE_ICON", Icon.createWithResource(context, R.drawable.adx_ic_passkey));
        bundle.putBundle("androidx.credentials.BUNDLE_KEY_REQUEST_DISPLAY_INFO", bundle2);
        CreateCredentialRequest.Builder alwaysSendAppInfoToProvider = new CreateCredentialRequest.Builder("androidx.credentials.TYPE_PUBLIC_KEY_CREDENTIAL", bundle, request.f14712b).setIsSystemProviderRequired(false).setAlwaysSendAppInfoToProvider(true);
        Intrinsics.checkNotNullExpressionValue(alwaysSendAppInfoToProvider, "setAlwaysSendAppInfoToProvider(...)");
        CreateCredentialRequest build = alwaysSendAppInfoToProvider.build();
        Intrinsics.checkNotNullExpressionValue(build, "build(...)");
        credentialManager.createCredential(context, build, cancellationSignal, executor, lVar);
    }

    @Override // n1.j
    public final void onGetCredential(Context context, p request, CancellationSignal cancellationSignal, Executor executor, h callback) {
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(request, "request");
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(callback, "callback");
        ha.l lVar = (ha.l) callback;
        CredentialManager credentialManager = this.a;
        if (credentialManager == null) {
            lVar.e(new o1.p("Your device doesn't support credential manager"));
            Unit unit = Unit.a;
            return;
        }
        l lVar2 = new l(lVar, this);
        Intrinsics.checkNotNull(credentialManager);
        Intrinsics.checkNotNullParameter(request, "request");
        Bundle bundle = new Bundle();
        bundle.putBoolean("androidx.credentials.BUNDLE_KEY_PREFER_IDENTITY_DOC_UI", false);
        bundle.putBoolean("androidx.credentials.BUNDLE_KEY_PREFER_IMMEDIATELY_AVAILABLE_CREDENTIALS", false);
        bundle.putParcelable("androidx.credentials.BUNDLE_KEY_PREFER_UI_BRANDING_COMPONENT_NAME", null);
        GetCredentialRequest.Builder builder = new GetCredentialRequest.Builder(bundle);
        for (i iVar : request.a) {
            builder.addCredentialOption(new CredentialOption.Builder(iVar.a, iVar.f14718b, iVar.f14719c).setIsSystemProviderRequired(false).setAllowedProviders(iVar.f14720d).build());
        }
        GetCredentialRequest build = builder.build();
        Intrinsics.checkNotNullExpressionValue(build, "build(...)");
        credentialManager.getCredential(context, build, cancellationSignal, executor, lVar2);
    }
}
