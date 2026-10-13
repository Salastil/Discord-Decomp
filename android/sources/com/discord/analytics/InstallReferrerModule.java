package com.discord.analytics;

import android.content.SharedPreferences;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u0000 \f2\u00020\u0001:\u0001\fB\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u0006\u001a\u00020\u0007H\u0016J\u0010\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000bH\u0007¨\u0006\r"}, d2 = {"Lcom/discord/analytics/InstallReferrerModule;", "Lcom/facebook/react/bridge/ReactContextBaseJavaModule;", "context", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "getName", "", "get", "", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "Companion", "analytics_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class InstallReferrerModule extends ReactContextBaseJavaModule {
    private static final int MAX_ATTEMPTS = 10;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public InstallReferrerModule(@NotNull ReactApplicationContext context) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX WARN: Type inference failed for: r0v3, types: [T, java.lang.String] */
    @ReactMethod
    public final void get(@NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(promise, "promise");
        SharedPreferences sharedPreferences = getReactApplicationContext().getSharedPreferences("InstallReferrer", 0);
        Ref.ObjectRef objectRef = new Ref.ObjectRef();
        objectRef.element = sharedPreferences.getString("referrer", null);
        int i5 = sharedPreferences.getInt("attempts", 0);
        Object obj = objectRef.element;
        if (obj != null) {
            promise.resolve(obj);
        } else if (i5 >= 10) {
            promise.resolve(null);
        } else {
            x.t(x.c(), null, new InstallReferrerModule$get$1(new Ref.ObjectRef(), this, objectRef, sharedPreferences, promise, i5, null), 3);
        }
    }

    @Override // com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return "InstallReferrer";
    }
}
