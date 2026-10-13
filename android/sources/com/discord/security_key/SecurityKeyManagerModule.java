package com.discord.security_key;

import android.app.Activity;
import android.content.ComponentCallbacks2;
import android.content.Intent;
import android.os.Build;
import androidx.credentials.CredentialManager;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.c1;
import com.discord.codegen.NativeSecurityKeyManagerModuleSpec;
import com.facebook.react.bridge.BaseActivityEventListener;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.devsupport.StackTraceHelper;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000O\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\b\u0010\n\u0002\u0018\u0002\n\u0002\b\u0006*\u0001\u0019\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\rH\u0002J\u0018\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0012H\u0002J\u0018\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0013\u001a\u00020\rH\u0002J(\u0010\u000e\u001a\u00020\u000b2\u0006\u0010\u000f\u001a\u00020\r2\n\b\u0002\u0010\u0013\u001a\u0004\u0018\u00010\r2\n\b\u0002\u0010\u0011\u001a\u0004\u0018\u00010\u0012H\u0002J\b\u0010\u001b\u001a\u00020\u000bH\u0016J\b\u0010\u001c\u001a\u00020\u000bH\u0016J\u0018\u0010\u001d\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u001e\u001a\u00020\tH\u0016J\u0018\u0010\u001f\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u001e\u001a\u00020\tH\u0016J\u0018\u0010 \u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u001e\u001a\u00020\tH\u0016J\u0018\u0010!\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u001e\u001a\u00020\tH\u0016J\u0018\u0010\"\u001a\u00020\u000b2\u0006\u0010#\u001a\u00020\r2\u0006\u0010\u001e\u001a\u00020\tH\u0016J\u0018\u0010$\u001a\u00020\u000b2\u0006\u0010#\u001a\u00020\r2\u0006\u0010\u001e\u001a\u00020\tH\u0016J(\u0010%\u001a\u00020\u000b2\u0006\u0010&\u001a\u00020\r2\u0006\u0010'\u001a\u00020\r2\u0006\u0010(\u001a\u00020)2\u0006\u0010\u001e\u001a\u00020\tH\u0016J0\u0010*\u001a\u00020\u000b2\u0006\u0010&\u001a\u00020\r2\u0006\u0010'\u001a\u00020\r2\u0006\u0010+\u001a\u00020\r2\u0006\u0010,\u001a\u00020\r2\u0006\u0010\u001e\u001a\u00020\tH\u0016J \u0010-\u001a\u00020\u000b2\u0006\u0010&\u001a\u00020\r2\u0006\u0010.\u001a\u00020\r2\u0006\u0010\u001e\u001a\u00020\tH\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0015X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0017X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0018\u001a\u00020\u0019X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u001a¨\u0006/"}, d2 = {"Lcom/discord/security_key/SecurityKeyManagerModule;", "Lcom/discord/codegen/NativeSecurityKeyManagerModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "getReactContext", "()Lcom/facebook/react/bridge/ReactApplicationContext;", "currentPromise", "Lcom/facebook/react/bridge/Promise;", "resolve", "", "data", "", "reject", "code", "Lcom/discord/security_key/WebAuthnDOMException;", "throwable", "", "message", "webauthn", "Lcom/discord/security_key/WebAuthn;", "credentialManager", "Landroidx/credentials/CredentialManager;", "activityEventListener", "com/discord/security_key/SecurityKeyManagerModule$activityEventListener$1", "Lcom/discord/security_key/SecurityKeyManagerModule$activityEventListener$1;", "initialize", "invalidate", "register", BaseJavaModule.METHOD_TYPE_PROMISE, "authenticate", "registerSecurityKey", "authenticateSecurityKey", "registerPasskey", "requestJson", "authenticatePasskey", "signalAllAcceptedCredentials", "rpId", "userId", "allAcceptedCredentialIds", "Lcom/facebook/react/bridge/ReadableArray;", "signalCurrentUserDetails", StackTraceHelper.NAME_KEY, "displayName", "signalUnknownCredential", "credentialId", "security_key_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class SecurityKeyManagerModule extends NativeSecurityKeyManagerModuleSpec {

    @NotNull
    private final SecurityKeyManagerModule$activityEventListener$1 activityEventListener;

    @NotNull
    private final CredentialManager credentialManager;
    private Promise currentPromise;

    @NotNull
    private final ReactApplicationContext reactContext;

    @NotNull
    private final WebAuthn webauthn;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Type inference failed for: r3v3, types: [com.discord.security_key.SecurityKeyManagerModule$activityEventListener$1] */
    public SecurityKeyManagerModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.reactContext = reactContext;
        this.webauthn = new WebAuthn(new SecurityKeyManagerModule$webauthn$1(this), new SecurityKeyManagerModule$webauthn$2(this));
        ReactApplicationContext context = getReactApplicationContext();
        Intrinsics.checkNotNullExpressionValue(context, "getReactApplicationContext(...)");
        Intrinsics.checkNotNullParameter(context, "context");
        this.credentialManager = new lb.a(context);
        this.activityEventListener = new BaseActivityEventListener() { // from class: com.discord.security_key.SecurityKeyManagerModule$activityEventListener$1
            @Override // com.facebook.react.bridge.BaseActivityEventListener, com.facebook.react.bridge.ActivityEventListener
            public void onActivityResult(Activity activity, int requestCode, int resultCode, Intent data) {
                WebAuthn webAuthn;
                Intrinsics.checkNotNullParameter(activity, "activity");
                webAuthn = SecurityKeyManagerModule.this.webauthn;
                webAuthn.onActivityResult(requestCode, resultCode, data);
            }
        };
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void reject(WebAuthnDOMException code, Throwable throwable) {
        reject(code.name(), null, throwable);
    }

    public static /* synthetic */ void reject$default(SecurityKeyManagerModule securityKeyManagerModule, String str, String str2, Throwable th2, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            str2 = null;
        }
        if ((i5 & 4) != 0) {
            th2 = null;
        }
        securityKeyManagerModule.reject(str, str2, th2);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void resolve(String data) {
        Promise promise = this.currentPromise;
        if (promise != null) {
            promise.resolve(data);
        }
        this.currentPromise = null;
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void authenticate(@NotNull String data, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(promise, "promise");
        authenticateSecurityKey(data, promise);
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void authenticatePasskey(@NotNull String requestJson, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(promise, "promise");
        if (this.currentPromise != null) {
            promise.reject("UnknownError", new WebAuthnAlreadyActiveException());
            return;
        }
        if (Build.VERSION.SDK_INT < 28) {
            promise.reject("NotSupportedError", new PasskeyNotSupportedException());
            return;
        }
        this.currentPromise = promise;
        ComponentCallbacks2 currentActivity = this.reactContext.getCurrentActivity();
        Intrinsics.checkNotNull(currentActivity, "null cannot be cast to non-null type androidx.lifecycle.LifecycleOwner");
        x.t(c1.c((LifecycleOwner) currentActivity), null, new SecurityKeyManagerModule$authenticatePasskey$1(requestJson, this, null), 3);
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void authenticateSecurityKey(@NotNull String data, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(promise, "promise");
        if (this.currentPromise != null) {
            promise.reject("UnknownError", new WebAuthnAlreadyActiveException());
        } else {
            this.currentPromise = promise;
            this.webauthn.authenticateSecurityKey(data, this.reactContext.getCurrentActivity());
        }
    }

    @NotNull
    public final ReactApplicationContext getReactContext() {
        return this.reactContext;
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void initialize() {
        super.initialize();
        getReactApplicationContext().addActivityEventListener(this.activityEventListener);
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        super.invalidate();
        getReactApplicationContext().removeActivityEventListener(this.activityEventListener);
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void register(@NotNull String data, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(promise, "promise");
        registerSecurityKey(data, promise);
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void registerPasskey(@NotNull String requestJson, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(promise, "promise");
        if (this.currentPromise != null) {
            promise.reject("UnknownError", new WebAuthnAlreadyActiveException());
            return;
        }
        if (Build.VERSION.SDK_INT < 28) {
            promise.reject("NotSupportedError", new PasskeyNotSupportedException());
            return;
        }
        this.currentPromise = promise;
        ComponentCallbacks2 currentActivity = this.reactContext.getCurrentActivity();
        Intrinsics.checkNotNull(currentActivity, "null cannot be cast to non-null type androidx.lifecycle.LifecycleOwner");
        x.t(c1.c((LifecycleOwner) currentActivity), null, new SecurityKeyManagerModule$registerPasskey$1(requestJson, this, null), 3);
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void registerSecurityKey(@NotNull String data, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(data, "data");
        Intrinsics.checkNotNullParameter(promise, "promise");
        if (this.currentPromise != null) {
            promise.reject("UnknownError", new WebAuthnAlreadyActiveException());
        } else {
            this.currentPromise = promise;
            this.webauthn.registerSecurityKey(data, this.reactContext.getCurrentActivity());
        }
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void signalAllAcceptedCredentials(@NotNull String rpId, @NotNull String userId, @NotNull ReadableArray allAcceptedCredentialIds, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(rpId, "rpId");
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(allAcceptedCredentialIds, "allAcceptedCredentialIds");
        Intrinsics.checkNotNullParameter(promise, "promise");
        ComponentCallbacks2 currentActivity = this.reactContext.getCurrentActivity();
        LifecycleOwner lifecycleOwner = currentActivity instanceof LifecycleOwner ? (LifecycleOwner) currentActivity : null;
        if (lifecycleOwner != null) {
            x.t(c1.c(lifecycleOwner), null, new SecurityKeyManagerModule$signalAllAcceptedCredentials$1(allAcceptedCredentialIds, this, promise, rpId, userId, null), 3);
        } else {
            promise.resolve(null);
            Unit unit = Unit.a;
        }
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void signalCurrentUserDetails(@NotNull String rpId, @NotNull String userId, @NotNull String name, @NotNull String displayName, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(rpId, "rpId");
        Intrinsics.checkNotNullParameter(userId, "userId");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(displayName, "displayName");
        Intrinsics.checkNotNullParameter(promise, "promise");
        ComponentCallbacks2 currentActivity = this.reactContext.getCurrentActivity();
        LifecycleOwner lifecycleOwner = currentActivity instanceof LifecycleOwner ? (LifecycleOwner) currentActivity : null;
        if (lifecycleOwner != null) {
            x.t(c1.c(lifecycleOwner), null, new SecurityKeyManagerModule$signalCurrentUserDetails$1(this, promise, rpId, userId, name, displayName, null), 3);
        } else {
            promise.resolve(null);
            Unit unit = Unit.a;
        }
    }

    @Override // com.discord.codegen.NativeSecurityKeyManagerModuleSpec
    public void signalUnknownCredential(@NotNull String rpId, @NotNull String credentialId, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(rpId, "rpId");
        Intrinsics.checkNotNullParameter(credentialId, "credentialId");
        Intrinsics.checkNotNullParameter(promise, "promise");
        ComponentCallbacks2 currentActivity = this.reactContext.getCurrentActivity();
        LifecycleOwner lifecycleOwner = currentActivity instanceof LifecycleOwner ? (LifecycleOwner) currentActivity : null;
        if (lifecycleOwner != null) {
            x.t(c1.c(lifecycleOwner), null, new SecurityKeyManagerModule$signalUnknownCredential$1(this, promise, rpId, credentialId, null), 3);
        } else {
            promise.resolve(null);
            Unit unit = Unit.a;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void reject(WebAuthnDOMException code, String message) {
        reject(code.name(), message, null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void reject(String code, String message, Throwable throwable) {
        Promise promise = this.currentPromise;
        if (promise != null) {
            promise.reject(code, message, throwable, null);
        }
        this.currentPromise = null;
    }
}
