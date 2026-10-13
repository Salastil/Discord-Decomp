package com.discord.age_assurance;

import android.app.Activity;
import android.os.Build;
import androidx.credentials.CredentialManager;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.c1;
import com.discord.codegen.NativeDigitalCredentialModuleSpec;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\u0018\u0000 \u000f2\u00020\u0001:\u0001\u000fB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u0010\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0016J\u0018\u0010\f\u001a\u00020\t2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\n\u001a\u00020\u000bH\u0016R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0010"}, d2 = {"Lcom/discord/age_assurance/DigitalCredentialModule;", "Lcom/discord/codegen/NativeDigitalCredentialModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "credentialManager", "Landroidx/credentials/CredentialManager;", "isAvailable", "", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "getCredential", "requestJson", "", "Companion", "age_assurance_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class DigitalCredentialModule extends NativeDigitalCredentialModuleSpec {

    @Deprecated
    @NotNull
    public static final String CODE_CANCELLED = "CANCELLED";

    @Deprecated
    @NotNull
    public static final String CODE_FAILED = "FAILED";

    @Deprecated
    @NotNull
    public static final String CODE_NOT_AVAILABLE = "NOT_AVAILABLE";

    @NotNull
    private static final Companion Companion = new Companion(null);

    @Deprecated
    public static final int MINIMUM_API_LEVEL = 28;

    @Deprecated
    @NotNull
    public static final String TAG = "DigitalCredentialModule";

    @NotNull
    private final CredentialManager credentialManager;

    @Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\b\u0082\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/discord/age_assurance/DigitalCredentialModule$Companion;", "", "<init>", "()V", "TAG", "", "MINIMUM_API_LEVEL", "", "CODE_CANCELLED", "CODE_NOT_AVAILABLE", "CODE_FAILED", "age_assurance_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private Companion() {
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public DigitalCredentialModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        ReactApplicationContext context = getReactApplicationContext();
        Intrinsics.checkNotNullExpressionValue(context, "getReactApplicationContext(...)");
        Intrinsics.checkNotNullParameter(context, "context");
        this.credentialManager = new lb.a(context);
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // com.discord.codegen.NativeDigitalCredentialModuleSpec
    public void getCredential(@NotNull String requestJson, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(requestJson, "requestJson");
        Intrinsics.checkNotNullParameter(promise, "promise");
        if (Build.VERSION.SDK_INT < 28) {
            promise.reject(CODE_NOT_AVAILABLE, "Digital credentials require API level 28+");
            return;
        }
        Activity currentActivity = getReactApplicationContext().getCurrentActivity();
        if (currentActivity == 0) {
            promise.reject(CODE_FAILED, "No current activity");
        } else {
            x.t(c1.c((LifecycleOwner) currentActivity), null, new DigitalCredentialModule$getCredential$1(requestJson, this, currentActivity, promise, null), 3);
        }
    }

    @Override // com.discord.codegen.NativeDigitalCredentialModuleSpec
    public void isAvailable(@NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.resolve(Boolean.valueOf(Build.VERSION.SDK_INT >= 28));
    }
}
