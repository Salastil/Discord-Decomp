package com.discord.samsung;

import a3.e;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.content.ServiceConnection;
import android.os.Bundle;
import android.os.IBinder;
import com.discord.jank_stats.JankRecordStore;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.logging.Log;
import com.msc.sa.aidl.ISACallback;
import com.msc.sa.aidl.ISAService;
import i.h;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.b0;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000A\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\b\u0006*\u0001\u001a\u0018\u0000 \u001d2\u00020\u0001:\u0002\u001e\u001dB\u0007¢\u0006\u0004\b\u0002\u0010\u0003J\u000f\u0010\u0005\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\u0005\u0010\u0003J#\u0010\t\u001a\u00020\u00042\b\u0010\u0007\u001a\u0004\u0018\u00010\u00062\b\u0010\b\u001a\u0004\u0018\u00010\u0006H\u0002¢\u0006\u0004\b\t\u0010\nJ\u000f\u0010\u000b\u001a\u00020\u0004H\u0002¢\u0006\u0004\b\u000b\u0010\u0003J\u000f\u0010\r\u001a\u00020\fH\u0002¢\u0006\u0004\b\r\u0010\u000eJ\u0019\u0010\u0011\u001a\u00020\u00042\b\u0010\u0010\u001a\u0004\u0018\u00010\u000fH\u0014¢\u0006\u0004\b\u0011\u0010\u0012J\u000f\u0010\u0013\u001a\u00020\u0004H\u0014¢\u0006\u0004\b\u0013\u0010\u0003R\u0016\u0010\u0015\u001a\u00020\u00148\u0002@\u0002X\u0082.¢\u0006\u0006\n\u0004\b\u0015\u0010\u0016R\u0016\u0010\u0018\u001a\u00020\u00178\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0018\u0010\u0019R\u0014\u0010\u001b\u001a\u00020\u001a8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u001b\u0010\u001c¨\u0006\u001f"}, d2 = {"Lcom/discord/samsung/SamsungConnectActivity;", "Li/h;", "<init>", "()V", "", "finishedWithRestartRequested", "", "authCode", "authServerUrl", "finishWithResult", "(Ljava/lang/String;Ljava/lang/String;)V", "startAndBindSamsungAuthService", "Lcom/msc/sa/aidl/ISACallback$Stub;", "createCallback", "()Lcom/msc/sa/aidl/ISACallback$Stub;", "Landroid/os/Bundle;", "savedInstanceState", "onCreate", "(Landroid/os/Bundle;)V", "onStop", "Lcom/msc/sa/aidl/ISACallback;", "samsungAccountServiceCallback", "Lcom/msc/sa/aidl/ISACallback;", "", "serviceBound", "Z", "com/discord/samsung/SamsungConnectActivity$serviceConnection$1", "serviceConnection", "Lcom/discord/samsung/SamsungConnectActivity$serviceConnection$1;", "Companion", "Result", "samsung_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SamsungConnectActivity extends h {

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    public static final String EXTRA_ATTEMPT_COUNT = "com.discord.samsung.intent.extra.ATTEMPT_COUNT";

    @NotNull
    public static final String EXTRA_REQ_AUTH_PARAM_AUTH_CODE = "com.discord.samsung.intent.extra.AUTH_CODE";

    @NotNull
    public static final String EXTRA_REQ_AUTH_PARAM_AUTH_SERVER_URL = "com.discord.samsung.intent.extra.SERVER_URL";

    @NotNull
    private static final String LOG_TAG = "Samsung";
    public static final int RESULT_SA_BINDING_FAILED = 500;
    private static final int SAMSUNG_REQ_ID = 1221;

    @NotNull
    private static final Intent serviceIntent;
    private ISACallback samsungAccountServiceCallback;
    private boolean serviceBound;

    @NotNull
    private final SamsungConnectActivity$serviceConnection$1 serviceConnection = new ServiceConnection() { // from class: com.discord.samsung.SamsungConnectActivity$serviceConnection$1
        @Override // android.content.ServiceConnection
        public void onServiceConnected(ComponentName name, IBinder service) {
            ISACallback iSACallback;
            SamsungConnectActivity.this.serviceBound = true;
            ISAService asInterface = ISAService.Stub.asInterface(service);
            Log log = Log.INSTANCE;
            Log.i$default(log, "Samsung", "Samsung Account service connection established", (Throwable) null, 4, (Object) null);
            try {
                iSACallback = SamsungConnectActivity.this.samsungAccountServiceCallback;
                if (iSACallback == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("samsungAccountServiceCallback");
                    iSACallback = null;
                }
                String registerCallback = asInterface.registerCallback(BuildConfig.SAMSUNGxDISCORD_CLIENT_ID, "dummy", "com.discord", iSACallback);
                Log.i$default(log, "Samsung", "Samsung Account service connection established: " + registerCallback, (Throwable) null, 4, (Object) null);
                if (registerCallback == null) {
                    SamsungConnectActivity.this.finishedWithRestartRequested();
                    return;
                }
                Bundle bundle = new Bundle();
                bundle.putStringArray("additional", new String[]{"api_server_url", "auth_server_url"});
                Unit unit = Unit.a;
                Log.i$default(log, "Samsung", "Samsung Account service connection established: isReqSucc? " + asInterface.requestAuthCode(1221, registerCallback, bundle), (Throwable) null, 4, (Object) null);
            } catch (Throwable th2) {
                Log.INSTANCE.e("Samsung", "Unable to connect to Samsung", th2);
                SamsungConnectActivity.this.finishWithResult(null, null);
            }
        }

        @Override // android.content.ServiceConnection
        public void onServiceDisconnected(ComponentName name) {
            Log.i$default(Log.INSTANCE, "Samsung", "Samsung Account service connection unbound", (Throwable) null, 4, (Object) null);
            SamsungConnectActivity.this.serviceBound = false;
            SamsungConnectActivity.this.finish();
        }
    };

    @Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0018\u0010\u000e\u001a\u00020\r2\u0006\u0010\u000f\u001a\u00020\u00102\b\b\u0002\u0010\u0011\u001a\u00020\u0007R\u000e\u0010\u0004\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lcom/discord/samsung/SamsungConnectActivity$Companion;", "", "<init>", "()V", "LOG_TAG", "", "SAMSUNG_REQ_ID", "", "EXTRA_REQ_AUTH_PARAM_AUTH_CODE", "EXTRA_REQ_AUTH_PARAM_AUTH_SERVER_URL", "EXTRA_ATTEMPT_COUNT", "RESULT_SA_BINDING_FAILED", "serviceIntent", "Landroid/content/Intent;", "getIntent", "context", "Landroid/content/Context;", "attemptCount", "samsung_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        public static /* synthetic */ Intent getIntent$default(Companion companion, Context context, int i5, int i6, Object obj) {
            if ((i6 & 2) != 0) {
                i5 = 0;
            }
            return companion.getIntent(context, i5);
        }

        @NotNull
        public final Intent getIntent(@NotNull Context context, int attemptCount) {
            Intrinsics.checkNotNullParameter(context, "context");
            Intent addFlags = new Intent(context, (Class<?>) SamsungConnectActivity.class).putExtra(SamsungConnectActivity.EXTRA_ATTEMPT_COUNT, attemptCount).addFlags(KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
            Intrinsics.checkNotNullExpressionValue(addFlags, "addFlags(...)");
            return addFlags;
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b6\u0018\u00002\u00020\u0001:\u0002\u0004\u0005B\t\b\u0004¢\u0006\u0004\b\u0002\u0010\u0003\u0082\u0001\u0002\u0006\u0007¨\u0006\b"}, d2 = {"Lcom/discord/samsung/SamsungConnectActivity$Result;", "", "<init>", "()V", "Success", "Failure", "Lcom/discord/samsung/SamsungConnectActivity$Result$Failure;", "Lcom/discord/samsung/SamsungConnectActivity$Result$Success;", "samsung_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static abstract class Result {

        @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\n\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\b\u0086\b\u0018\u00002\u00020\u0001B\u0019\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\t\u0010\f\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000e\u001a\u00020\u00032\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010HÖ\u0003J\t\u0010\u0011\u001a\u00020\u0005HÖ\u0001J\t\u0010\u0012\u001a\u00020\u0013HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\u0014"}, d2 = {"Lcom/discord/samsung/SamsungConnectActivity$Result$Failure;", "Lcom/discord/samsung/SamsungConnectActivity$Result;", "isRetryAllowed", "", "attemptCount", "", "<init>", "(ZI)V", "()Z", "getAttemptCount", "()I", "component1", "component2", "copy", "equals", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "samsung_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class Failure extends Result {
            private final int attemptCount;
            private final boolean isRetryAllowed;

            public /* synthetic */ Failure(boolean z5, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
                this(z5, (i6 & 2) != 0 ? 0 : i5);
            }

            public static /* synthetic */ Failure copy$default(Failure failure, boolean z5, int i5, int i6, Object obj) {
                if ((i6 & 1) != 0) {
                    z5 = failure.isRetryAllowed;
                }
                if ((i6 & 2) != 0) {
                    i5 = failure.attemptCount;
                }
                return failure.copy(z5, i5);
            }

            /* renamed from: component1, reason: from getter */
            public final boolean getIsRetryAllowed() {
                return this.isRetryAllowed;
            }

            /* renamed from: component2, reason: from getter */
            public final int getAttemptCount() {
                return this.attemptCount;
            }

            @NotNull
            public final Failure copy(boolean isRetryAllowed, int attemptCount) {
                return new Failure(isRetryAllowed, attemptCount);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                if (!(other instanceof Failure)) {
                    return false;
                }
                Failure failure = (Failure) other;
                return this.isRetryAllowed == failure.isRetryAllowed && this.attemptCount == failure.attemptCount;
            }

            public final int getAttemptCount() {
                return this.attemptCount;
            }

            public int hashCode() {
                return Integer.hashCode(this.attemptCount) + (Boolean.hashCode(this.isRetryAllowed) * 31);
            }

            public final boolean isRetryAllowed() {
                return this.isRetryAllowed;
            }

            @NotNull
            public String toString() {
                return "Failure(isRetryAllowed=" + this.isRetryAllowed + ", attemptCount=" + this.attemptCount + ")";
            }

            public Failure(boolean z5, int i5) {
                super(null);
                this.isRetryAllowed = z5;
                this.attemptCount = i5;
            }
        }

        @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\n\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\b\u0086\b\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0004\b\u0005\u0010\u0006J\t\u0010\n\u001a\u00020\u0003HÆ\u0003J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\u001d\u0010\f\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0003HÆ\u0001J\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010HÖ\u0003J\t\u0010\u0011\u001a\u00020\u0012HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\b¨\u0006\u0014"}, d2 = {"Lcom/discord/samsung/SamsungConnectActivity$Result$Success;", "Lcom/discord/samsung/SamsungConnectActivity$Result;", "authCode", "", "serverUrl", "<init>", "(Ljava/lang/String;Ljava/lang/String;)V", "getAuthCode", "()Ljava/lang/String;", "getServerUrl", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "", "toString", "samsung_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final /* data */ class Success extends Result {

            @NotNull
            private final String authCode;

            @NotNull
            private final String serverUrl;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            public Success(@NotNull String authCode, @NotNull String serverUrl) {
                super(null);
                Intrinsics.checkNotNullParameter(authCode, "authCode");
                Intrinsics.checkNotNullParameter(serverUrl, "serverUrl");
                this.authCode = authCode;
                this.serverUrl = serverUrl;
            }

            public static /* synthetic */ Success copy$default(Success success, String str, String str2, int i5, Object obj) {
                if ((i5 & 1) != 0) {
                    str = success.authCode;
                }
                if ((i5 & 2) != 0) {
                    str2 = success.serverUrl;
                }
                return success.copy(str, str2);
            }

            @NotNull
            /* renamed from: component1, reason: from getter */
            public final String getAuthCode() {
                return this.authCode;
            }

            @NotNull
            /* renamed from: component2, reason: from getter */
            public final String getServerUrl() {
                return this.serverUrl;
            }

            @NotNull
            public final Success copy(@NotNull String authCode, @NotNull String serverUrl) {
                Intrinsics.checkNotNullParameter(authCode, "authCode");
                Intrinsics.checkNotNullParameter(serverUrl, "serverUrl");
                return new Success(authCode, serverUrl);
            }

            public boolean equals(Object other) {
                if (this == other) {
                    return true;
                }
                if (!(other instanceof Success)) {
                    return false;
                }
                Success success = (Success) other;
                return Intrinsics.areEqual(this.authCode, success.authCode) && Intrinsics.areEqual(this.serverUrl, success.serverUrl);
            }

            @NotNull
            public final String getAuthCode() {
                return this.authCode;
            }

            @NotNull
            public final String getServerUrl() {
                return this.serverUrl;
            }

            public int hashCode() {
                return this.serverUrl.hashCode() + (this.authCode.hashCode() * 31);
            }

            @NotNull
            public String toString() {
                return s4.h.g("Success(authCode=", this.authCode, ", serverUrl=", this.serverUrl, ")");
            }
        }

        public /* synthetic */ Result(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Result() {
        }
    }

    static {
        Intent intent = new Intent("com.msc.action.samsungaccount.REQUEST_SERVICE").setPackage("com.osp.app.signin");
        Intrinsics.checkNotNullExpressionValue(intent, "setPackage(...)");
        serviceIntent = intent;
    }

    private final ISACallback.Stub createCallback() {
        return new ISACallback.Stub() { // from class: com.discord.samsung.SamsungConnectActivity$createCallback$1
            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveAccessToken(int requestID, boolean isSuccess, Bundle resultData) {
                throw new IllegalStateException("Unexpected call to onReceiveAccessToken");
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveAuthCode(int requestID, boolean isSuccess, Bundle resultData) {
                String string = resultData != null ? resultData.getString("authcode") : null;
                String string2 = resultData != null ? resultData.getString("auth_server_url") : null;
                Log log = Log.INSTANCE;
                Log.i$default(log, "Samsung", "Samsung onReceiveAuthCode=" + isSuccess, (Throwable) null, 4, (Object) null);
                if (!isSuccess || string == null || StringsKt.K(string)) {
                    String string3 = resultData != null ? resultData.getString("error_code") : null;
                    String string4 = resultData != null ? resultData.getString("error_message") : null;
                    StringBuilder sb2 = new StringBuilder("Samsung Account link failure ");
                    StringBuilder t5 = e.t("[", string3, ":", string != null ? b0.C(4, string) : null, "]: ");
                    t5.append(string4);
                    sb2.append(t5.toString());
                    String sb3 = sb2.toString();
                    Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
                    Log.w$default(log, "Samsung", sb3, (Throwable) null, 4, (Object) null);
                }
                SamsungConnectActivity.this.finishWithResult(string, string2);
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveChecklistValidation(int requestID, boolean isSuccess, Bundle resultData) {
                throw new IllegalStateException("Unexpected call to onReceiveAccessToken");
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveDisclaimerAgreement(int requestID, boolean isSuccess, Bundle resultData) {
                throw new IllegalStateException("Unexpected call to onReceiveDisclaimerAgreement");
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceivePasswordConfirmation(int requestID, boolean isSuccess, Bundle resultData) {
                throw new IllegalStateException("Unexpected call to onReceivePasswordConfirmation");
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveRLControlFMM(int requestID, boolean isSuccess, Bundle resultData) {
                throw new IllegalStateException("Unexpected call to onReceiveRLControlFMM");
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveRubinRequest(int requestID, boolean isSuccess, Bundle resultData) {
                throw new IllegalStateException("Unexpected call to onReceiveRubinRequest");
            }

            @Override // com.msc.sa.aidl.ISACallback
            public void onReceiveSCloudAccessToken(int requestID, boolean isSuccess, Bundle resultData) {
                throw new IllegalStateException("Unexpected call to onReceiveSCloudAccessToken");
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void finishWithResult(String authCode, String authServerUrl) {
        Log.i$default(Log.INSTANCE, LOG_TAG, e.l("Finishing With Result. AuthCode: ", authCode, ", AuthServerUrl: ", authServerUrl), (Throwable) null, 4, (Object) null);
        if (authCode == null || StringsKt.K(authCode) || authServerUrl == null || StringsKt.K(authServerUrl)) {
            setResult(0);
        } else {
            Intent intent = new Intent();
            intent.putExtra(EXTRA_REQ_AUTH_PARAM_AUTH_CODE, authCode);
            intent.putExtra(EXTRA_REQ_AUTH_PARAM_AUTH_SERVER_URL, authServerUrl);
            Unit unit = Unit.a;
            setResult(-1, intent);
        }
        finish();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void finishedWithRestartRequested() {
        Log.i$default(Log.INSTANCE, LOG_TAG, "finishedWithRestartRequested", (Throwable) null, 4, (Object) null);
        setResult(500, new Intent().putExtra(EXTRA_ATTEMPT_COUNT, getIntent().getIntExtra(EXTRA_ATTEMPT_COUNT, 0) + 1));
        finish();
    }

    private final void startAndBindSamsungAuthService() {
        Log log = Log.INSTANCE;
        Log.i$default(log, LOG_TAG, "Samsung starting SA Service", (Throwable) null, 4, (Object) null);
        Intent intent = serviceIntent;
        if (startService(intent) == null) {
            Log.e$default(log, LOG_TAG, "Samsung Account service could not be started", (Throwable) null, 4, (Object) null);
        } else {
            if (bindService(intent, this.serviceConnection, 1)) {
                return;
            }
            Log.e$default(log, LOG_TAG, "Samsung Account service could not be bound", (Throwable) null, 4, (Object) null);
        }
    }

    @Override // androidx.fragment.app.FragmentActivity, androidx.activity.ComponentActivity, x0.h, android.app.Activity
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.i$default(Log.INSTANCE, LOG_TAG, "onCreate SamsungConnectActivity", (Throwable) null, 4, (Object) null);
        this.samsungAccountServiceCallback = createCallback();
        startAndBindSamsungAuthService();
    }

    @Override // i.h, androidx.fragment.app.FragmentActivity, android.app.Activity
    public void onStop() {
        Log.i$default(Log.INSTANCE, LOG_TAG, "onStop SamsungConnectActivity", (Throwable) null, 4, (Object) null);
        if (this.serviceBound) {
            unbindService(this.serviceConnection);
            this.serviceBound = false;
        }
        super.onStop();
    }
}
