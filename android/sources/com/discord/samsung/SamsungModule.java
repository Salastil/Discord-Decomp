package com.discord.samsung;

import a3.e;
import android.app.Activity;
import android.content.ComponentCallbacks2;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.c1;
import com.discord.jank_stats.JankScreenContext;
import com.discord.misc.utilities.activity.ActivityUtilities;
import com.discord.react.utilities.NativeArrayExtensionsKt;
import com.discord.samsung.SamsungConnectActivity;
import com.facebook.react.bridge.BaseActivityEventListener;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import fo.n;
import java.util.function.Function;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.b0;
import nr.x;
import okhttp3.Response;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000S\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\n\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002*\u0001\u000b\u0018\u0000 (2\u00020\u0001:\u0001(B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\r\u001a\u00020\u000eH\u0016J\u0018\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u000e2\u0006\u0010\u0012\u001a\u00020\tH\u0007J\u0010\u0010\u0013\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\tH\u0007J\u0010\u0010\u0014\u001a\u00020\u00102\u0006\u0010\u0012\u001a\u00020\tH\u0007J,\u0010\u0015\u001a\u00020\u00102\u0006\u0010\u0016\u001a\u00020\u000e2\b\u0010\u0017\u001a\u0004\u0018\u00010\u000e2\b\u0010\u0018\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\u0012\u001a\u00020\tH\u0007J\u0014\u0010\u0019\u001a\u00020\u00102\n\b\u0002\u0010\u001a\u001a\u0004\u0018\u00010\u001bH\u0002J\u0010\u0010\u001c\u001a\u00020\u00102\u0006\u0010\u001d\u001a\u00020\u001eH\u0002J\u0010\u0010\u001f\u001a\u00020\u00102\u0006\u0010 \u001a\u00020!H\u0002J\u0010\u0010\"\u001a\u00020\u000e2\u0006\u0010#\u001a\u00020\u000eH\u0002J\u0012\u0010$\u001a\u0004\u0018\u00010%2\u0006\u0010&\u001a\u00020'H\u0002R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0004\n\u0002\u0010\f¨\u0006)"}, d2 = {"Lcom/discord/samsung/SamsungModule;", "Lcom/facebook/react/bridge/ReactContextBaseJavaModule;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "getReactContext", "()Lcom/facebook/react/bridge/ReactApplicationContext;", "connectionPromise", "Lcom/facebook/react/bridge/Promise;", "samsungActivityEventListener", "com/discord/samsung/SamsungModule$samsungActivityEventListener$1", "Lcom/discord/samsung/SamsungModule$samsungActivityEventListener$1;", "getName", "", "checkIfOAuthRequest", "", "clientId", BaseJavaModule.METHOD_TYPE_PROMISE, "showConnectionDisclaimer", "getAccountUrlAndAuthCode", "finishSamsungAuthorization", "authCode", "location", "state", "resolveConnection", "what", "", "rejectConnection", "throwable", "", "handleAuthResult", "result", "Lcom/discord/samsung/SamsungConnectActivity$Result;", "getAccountUrlFromAuthServerUrl", "authServerUrl", "handleSamsungCallback", "Landroid/net/Uri;", "response", "Lokhttp3/Response;", "Companion", "samsung_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nSamsungModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 SamsungModule.kt\ncom/discord/samsung/SamsungModule\n+ 2 Uri.kt\nandroidx/core/net/UriKt\n*L\n1#1,303:1\n29#2:304\n*S KotlinDebug\n*F\n+ 1 SamsungModule.kt\ncom/discord/samsung/SamsungModule\n*L\n273#1:304\n*E\n"})
/* loaded from: classes.dex */
public final class SamsungModule extends ReactContextBaseJavaModule {

    @NotNull
    private static final Intent disclaimerIntent;
    private Promise connectionPromise;

    @NotNull
    private final ReactApplicationContext reactContext;

    @NotNull
    private final SamsungModule$samsungActivityEventListener$1 samsungActivityEventListener;

    static {
        Intent putExtra = new Intent("com.msc.action.samsungaccount.REQUEST_NEW_THIRD_PARTY_INTEGRATION_WITH_SAMSUNG_ACCOUNT").putExtra("client_id", BuildConfig.SAMSUNGxDISCORD_CLIENT_ID).putExtra("progress_theme", "dark");
        Intrinsics.checkNotNullExpressionValue(putExtra, "putExtra(...)");
        disclaimerIntent = putExtra;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v1, types: [com.discord.samsung.SamsungModule$samsungActivityEventListener$1, com.facebook.react.bridge.ActivityEventListener] */
    public SamsungModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.reactContext = reactContext;
        ?? r22 = new BaseActivityEventListener() { // from class: com.discord.samsung.SamsungModule$samsungActivityEventListener$1
            /* JADX WARN: Multi-variable type inference failed */
            /* JADX WARN: Type inference failed for: r2v0, types: [kotlin.jvm.internal.DefaultConstructorMarker] */
            /* JADX WARN: Type inference failed for: r2v2, types: [java.lang.String] */
            /* JADX WARN: Type inference failed for: r2v3 */
            @Override // com.facebook.react.bridge.BaseActivityEventListener, com.facebook.react.bridge.ActivityEventListener
            public void onActivityResult(Activity activity, int requestCode, int resultCode, Intent data) {
                Bundle extras;
                Bundle extras2;
                Intrinsics.checkNotNullParameter(activity, "activity");
                String str = 0;
                str = 0;
                if (requestCode == 100) {
                    if (resultCode == -1) {
                        SamsungModule.resolveConnection$default(SamsungModule.this, null, 1, null);
                        return;
                    }
                    String string = (data == null || (extras2 = data.getExtras()) == null) ? null : extras2.getString("error_message");
                    if (data != null && (extras = data.getExtras()) != null) {
                        str = extras.getString("error_code");
                    }
                    SamsungModule.this.rejectConnection(new Throwable(e.l("Connection requires disclaimer acceptance. [", str, "] ", string)));
                    return;
                }
                if (requestCode != 101) {
                    super.onActivityResult(activity, requestCode, resultCode, data);
                    return;
                }
                Object[] objArr = 0;
                Object[] objArr2 = 0;
                if (resultCode == 500) {
                    SamsungModule.this.handleAuthResult(new SamsungConnectActivity.Result.Failure(true, data != null ? data.getIntExtra(SamsungConnectActivity.EXTRA_ATTEMPT_COUNT, 0) : 0));
                    return;
                }
                if (data == null) {
                    SamsungModule.this.handleAuthResult(new SamsungConnectActivity.Result.Failure(objArr2 == true ? 1 : 0, objArr == true ? 1 : 0, 2, str));
                    return;
                }
                String stringExtra = data.getStringExtra(SamsungConnectActivity.EXTRA_REQ_AUTH_PARAM_AUTH_CODE);
                if (stringExtra == null) {
                    stringExtra = "";
                }
                String stringExtra2 = data.getStringExtra(SamsungConnectActivity.EXTRA_REQ_AUTH_PARAM_AUTH_SERVER_URL);
                SamsungModule.this.handleAuthResult(new SamsungConnectActivity.Result.Success(stringExtra, stringExtra2 != null ? stringExtra2 : ""));
            }
        };
        this.samsungActivityEventListener = r22;
        getReactApplicationContext().addActivityEventListener(r22);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit getAccountUrlAndAuthCode$lambda$1(SamsungModule samsungModule, Throwable th2) {
        Intrinsics.checkNotNull(th2);
        samsungModule.rejectConnection(th2);
        return Unit.a;
    }

    private final String getAccountUrlFromAuthServerUrl(String authServerUrl) {
        String B = b0.B(2, authServerUrl);
        int hashCode = B.hashCode();
        if (hashCode == 3179) {
            return !B.equals("cn") ? "https://account.samsung.com" : "https://account.samsung.cn";
        }
        if (hashCode != 3248) {
            return (hashCode == 3742 && B.equals("us")) ? "https://us.account.samsung.com" : "https://account.samsung.com";
        }
        B.equals("eu");
        return "https://account.samsung.com";
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void handleAuthResult(SamsungConnectActivity.Result result) {
        if (result instanceof SamsungConnectActivity.Result.Success) {
            SamsungConnectActivity.Result.Success success = (SamsungConnectActivity.Result.Success) result;
            resolveConnection(NativeArrayExtensionsKt.nativeArrayOf(getAccountUrlFromAuthServerUrl(success.getServerUrl()), success.getAuthCode()));
            return;
        }
        if (!(result instanceof SamsungConnectActivity.Result.Failure)) {
            throw new n();
        }
        SamsungConnectActivity.Result.Failure failure = (SamsungConnectActivity.Result.Failure) result;
        if (failure.isRetryAllowed() && failure.getAttemptCount() < 2) {
            Activity currentActivity = this.reactContext.getCurrentActivity();
            if (currentActivity == null) {
                rejectConnection(new Throwable("No current activity to retry Samsung auth"));
                return;
            } else {
                ActivityUtilities.startActivityForResultAsyncWithFuture$default(ActivityUtilities.INSTANCE, currentActivity, SamsungConnectActivity.INSTANCE.getIntent(currentActivity, failure.getAttemptCount()), 101, null, 8, null).exceptionally((Function) new a(this, 1));
                return;
            }
        }
        rejectConnection(new Throwable("Attempts: " + failure.getAttemptCount() + ", Retry: " + failure.isRetryAllowed()));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit handleAuthResult$lambda$2(SamsungModule samsungModule, Throwable th2) {
        Intrinsics.checkNotNull(th2);
        samsungModule.rejectConnection(th2);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0037, code lost:
    
        if (r3 == false) goto L24;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Uri handleSamsungCallback(Response response) {
        String str;
        String query;
        String f2 = response.f("Location", null);
        Uri parse = f2 != null ? Uri.parse(f2) : null;
        boolean z5 = false;
        if (!((parse == null || (query = parse.getQuery()) == null) ? false : StringsKt.D(query, "error", false))) {
            if (!response.g()) {
                int i5 = response.f16088v;
                if (i5 != 307 && i5 != 308) {
                    switch (i5) {
                    }
                }
                z5 = true;
            }
            return parse;
        }
        if (parse == null || (str = parse.getQueryParameter("error")) == null) {
            str = JankScreenContext.UNKNOWN_SCREEN;
        }
        throw new Companion.SamsungCallbackException(str, parse != null ? parse.getQueryParameter("error_description") : null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void rejectConnection(Throwable throwable) {
        Promise promise = this.connectionPromise;
        if (promise != null) {
            promise.reject(throwable);
        }
        this.connectionPromise = null;
    }

    private final void resolveConnection(Object what) {
        Promise promise = this.connectionPromise;
        if (promise != null) {
            promise.resolve(what);
        }
        this.connectionPromise = null;
    }

    public static /* synthetic */ void resolveConnection$default(SamsungModule samsungModule, Object obj, int i5, Object obj2) {
        if ((i5 & 1) != 0) {
            obj = null;
        }
        samsungModule.resolveConnection(obj);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit showConnectionDisclaimer$lambda$0(SamsungModule samsungModule, Throwable th2) {
        Intrinsics.checkNotNull(th2);
        samsungModule.rejectConnection(th2);
        return Unit.a;
    }

    /* JADX WARN: Code restructure failed: missing block: B:6:0x0021, code lost:
    
        if (kotlin.text.x.i(android.os.Build.MANUFACTURER, "samsung", true) != false) goto L10;
     */
    @ReactMethod
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void checkIfOAuthRequest(@NotNull String clientId, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(clientId, "clientId");
        Intrinsics.checkNotNullParameter(promise, "promise");
        boolean z5 = Intrinsics.areEqual(clientId, BuildConfig.SAMSUNG_CLIENT_ID) && Build.VERSION.SDK_INT >= 28;
        promise.resolve(Boolean.valueOf(z5));
    }

    @ReactMethod
    public final void finishSamsungAuthorization(@NotNull String authCode, String location, String state, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(authCode, "authCode");
        Intrinsics.checkNotNullParameter(promise, "promise");
        this.connectionPromise = promise;
        ComponentCallbacks2 currentActivity = this.reactContext.getCurrentActivity();
        Intrinsics.checkNotNull(currentActivity, "null cannot be cast to non-null type androidx.lifecycle.LifecycleOwner");
        x.t(c1.c((LifecycleOwner) currentActivity), null, new SamsungModule$finishSamsungAuthorization$1(location, this, state, authCode, null), 3);
    }

    @ReactMethod
    public final void getAccountUrlAndAuthCode(@NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        this.connectionPromise = promise;
        Activity currentActivity = getReactApplicationContext().getCurrentActivity();
        if (currentActivity == null) {
            rejectConnection(new IllegalStateException("No current activity to start Samsung auth"));
        } else {
            ActivityUtilities.INSTANCE.startActivityForResultAsyncWithFuture(currentActivity, SamsungConnectActivity.Companion.getIntent$default(SamsungConnectActivity.INSTANCE, currentActivity, 0, 2, null), 101, Bundle.EMPTY).exceptionally((Function<Throwable, ? extends Unit>) new a(this, 0));
        }
    }

    @Override // com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return "Samsung";
    }

    @NotNull
    public final ReactApplicationContext getReactContext() {
        return this.reactContext;
    }

    @ReactMethod
    public final void showConnectionDisclaimer(@NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        this.connectionPromise = promise;
        Activity currentActivity = getReactApplicationContext().getCurrentActivity();
        if (currentActivity == null) {
            rejectConnection(new IllegalStateException("No current activity to start Samsung disclaimer"));
        } else {
            ActivityUtilities.INSTANCE.startActivityForResultAsyncWithFuture(currentActivity, disclaimerIntent, 100, Bundle.EMPTY).exceptionally((Function<Throwable, ? extends Unit>) new a(this, 2));
        }
    }
}
