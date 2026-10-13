package bg;

import android.content.Context;
import android.os.Bundle;
import android.os.Looper;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m1 extends nt.a {
    public final /* synthetic */ int a;

    public /* synthetic */ m1(int i5) {
        this.a = i5;
    }

    @Override // nt.a
    public ze.c c(Context context, Looper looper, androidx.appcompat.widget.w wVar, Object obj, ze.j jVar, ze.k kVar) {
        switch (this.a) {
            case 0:
                return new n1(context, looper, 148, wVar, jVar, kVar, 0);
            case 1:
            case 4:
            default:
                return super.c(context, looper, wVar, obj, jVar, kVar);
            case 2:
                wVar.getClass();
                Integer num = (Integer) wVar.f1146x;
                Bundle bundle = new Bundle();
                bundle.putParcelable("com.google.android.gms.signin.internal.clientRequestedAccount", null);
                if (num != null) {
                    bundle.putInt("com.google.android.gms.common.internal.ClientSettings.sessionId", num.intValue());
                }
                bundle.putBoolean("com.google.android.gms.signin.internal.offlineAccessRequested", false);
                bundle.putBoolean("com.google.android.gms.signin.internal.idTokenRequested", false);
                bundle.putString("com.google.android.gms.signin.internal.serverClientId", null);
                bundle.putBoolean("com.google.android.gms.signin.internal.usePromptModeForAuthCode", true);
                bundle.putBoolean("com.google.android.gms.signin.internal.forceCodeForRefreshToken", false);
                bundle.putString("com.google.android.gms.signin.internal.hostedDomain", null);
                bundle.putString("com.google.android.gms.signin.internal.logSessionId", null);
                bundle.putBoolean("com.google.android.gms.signin.internal.waitForAccessTokenRefresh", false);
                return new hg.a(context, looper, wVar, bundle, jVar, kVar);
            case 3:
                obj.getClass();
                throw new ClassCastException();
            case 5:
                return new vf.g(context, looper, wVar, (re.b) obj, (af.q) jVar, (af.q) kVar);
            case 6:
                return new ve.e(context, looper, wVar, (GoogleSignInOptions) obj, (af.q) jVar, (af.q) kVar);
        }
    }

    @Override // nt.a
    public ze.c d(Context context, Looper looper, androidx.appcompat.widget.w clientSettings, Object obj, af.q connectionCallbacks, af.q connectionFailedListener) {
        switch (this.a) {
            case 1:
                return new df.c(context, looper, clientSettings, (bf.k) obj, connectionCallbacks, connectionFailedListener);
            case 2:
            case 3:
            case 5:
            case 6:
            default:
                return super.d(context, looper, clientSettings, obj, connectionCallbacks, connectionFailedListener);
            case 4:
                ze.a apiOptions = (ze.a) obj;
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(looper, "looper");
                Intrinsics.checkNotNullParameter(clientSettings, "commonSettings");
                Intrinsics.checkNotNullParameter(apiOptions, "apiOptions");
                Intrinsics.checkNotNullParameter(connectionCallbacks, "connectedListener");
                Intrinsics.checkNotNullParameter(connectionFailedListener, "connectionFailedListener");
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(looper, "looper");
                Intrinsics.checkNotNullParameter(clientSettings, "clientSettings");
                Intrinsics.checkNotNullParameter(connectionCallbacks, "connectionCallbacks");
                Intrinsics.checkNotNullParameter(connectionFailedListener, "connectionFailedListener");
                return new lf.e(context, looper, 322, clientSettings, connectionCallbacks, connectionFailedListener, 0);
            case 7:
                return new wf.e(context, looper, 126, clientSettings, connectionCallbacks, connectionFailedListener, 0);
            case 8:
                ze.a apiOptions2 = (ze.a) obj;
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(looper, "looper");
                Intrinsics.checkNotNullParameter(clientSettings, "commonSettings");
                Intrinsics.checkNotNullParameter(apiOptions2, "apiOptions");
                Intrinsics.checkNotNullParameter(connectionCallbacks, "connectedListener");
                Intrinsics.checkNotNullParameter(connectionFailedListener, "connectionFailedListener");
                Intrinsics.checkNotNullParameter(context, "context");
                Intrinsics.checkNotNullParameter(looper, "looper");
                Intrinsics.checkNotNullParameter(clientSettings, "clientSettings");
                Intrinsics.checkNotNullParameter(connectionCallbacks, "connectionCallbacks");
                Intrinsics.checkNotNullParameter(connectionFailedListener, "connectionFailedListener");
                return new tf.e(context, looper, 352, clientSettings, connectionCallbacks, connectionFailedListener, 0);
            case 9:
                return new vf.c(context, looper, clientSettings, connectionCallbacks, connectionFailedListener);
        }
    }
}
