package com.discord.permissions;

import bs.e1;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.WritableMap;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u00005\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0000\n\u0002\u0018\u0002\n\u0000*\u0001\u0000\b\n\u0018\u00002\u00020\u0001J\u001c\u0010\u0002\u001a\u00020\u00032\u0012\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0001\u0012\u0004\u0012\u00020\u00030\u0005H\u0002J\u0012\u0010\u0006\u001a\u00020\u00032\b\u0010\u0007\u001a\u0004\u0018\u00010\bH\u0016J\u001c\u0010\t\u001a\u00020\u00032\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u000bH\u0016J\u001c\u0010\t\u001a\u00020\u00032\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\r\u001a\u0004\u0018\u00010\u000eH\u0016J&\u0010\t\u001a\u00020\u00032\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u000b2\b\u0010\r\u001a\u0004\u0018\u00010\u000eH\u0016J\u0010\u0010\t\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u000eH\u0016J\u0018\u0010\t\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\u001a\u0010\t\u001a\u00020\u00032\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J$\u0010\t\u001a\u00020\u00032\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\r\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J$\u0010\t\u001a\u00020\u00032\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u000b2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\u0010\u0010\t\u001a\u00020\u00032\u0006\u0010\f\u001a\u00020\u000bH\u0016J0\u0010\t\u001a\u00020\u00032\b\u0010\n\u001a\u0004\u0018\u00010\u000b2\b\u0010\f\u001a\u0004\u0018\u00010\u000b2\b\u0010\r\u001a\u0004\u0018\u00010\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010H\u0016¨\u0006\u0011"}, d2 = {"com/discord/permissions/NativePermissionManagerModule$createMultiPromiseResolver$1", "Lcom/facebook/react/bridge/Promise;", "executeOnAllPending", "", "action", "Lkotlin/Function1;", "resolve", "value", "", "reject", "code", "", "message", "throwable", "", "userInfo", "Lcom/facebook/react/bridge/WritableMap;", "permissions_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNativePermissionManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NativePermissionManagerModule.kt\ncom/discord/permissions/NativePermissionManagerModule$createMultiPromiseResolver$1\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,419:1\n1869#2,2:420\n*S KotlinDebug\n*F\n+ 1 NativePermissionManagerModule.kt\ncom/discord/permissions/NativePermissionManagerModule$createMultiPromiseResolver$1\n*L\n332#1:420,2\n*E\n"})
/* loaded from: classes.dex */
public final class NativePermissionManagerModule$createMultiPromiseResolver$1 implements Promise {
    final /* synthetic */ String $permissionKey;
    final /* synthetic */ NativePermissionManagerModule this$0;

    public NativePermissionManagerModule$createMultiPromiseResolver$1(NativePermissionManagerModule nativePermissionManagerModule, String str) {
        this.this$0 = nativePermissionManagerModule;
        this.$permissionKey = str;
    }

    private final void executeOnAllPending(Function1<? super Promise, Unit> action) {
        Map map;
        Map map2;
        map = this.this$0.pendingPermissionRequests;
        NativePermissionManagerModule nativePermissionManagerModule = this.this$0;
        String str = this.$permissionKey;
        synchronized (map) {
            map2 = nativePermissionManagerModule.pendingPermissionRequests;
            List<Promise> list = (List) map2.remove(str);
            if (list == null) {
                return;
            }
            for (Promise promise : list) {
                try {
                    action.invoke(promise);
                } catch (Exception e9) {
                    promise.reject("PROMISE_RESOLUTION_ERROR", "Failed to resolve promise: " + e9.getMessage(), e9);
                }
            }
            Unit unit = Unit.a;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$10(String str, String str2, WritableMap writableMap, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(str, str2, writableMap);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$11(String str, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(str);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$12(String str, String str2, Throwable th2, WritableMap writableMap, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(str, str2, th2, writableMap);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$3(String str, String str2, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(str, str2);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$4(String str, Throwable th2, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(str, th2);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$5(String str, String str2, Throwable th2, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(str, str2, th2);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$6(Throwable th2, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(th2);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$7(Throwable th2, WritableMap writableMap, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(th2, writableMap);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$8(String str, WritableMap writableMap, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(str, writableMap);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit reject$lambda$9(String str, Throwable th2, WritableMap writableMap, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.reject(str, th2, writableMap);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit resolve$lambda$2(Object obj, Promise it) {
        Intrinsics.checkNotNullParameter(it, "it");
        it.resolve(obj);
        return Unit.a;
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(String code, String message) {
        executeOnAllPending(new b(0, code, message));
    }

    @Override // com.facebook.react.bridge.Promise
    public void resolve(Object value) {
        executeOnAllPending(new e1(25, value));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(String code, Throwable throwable) {
        executeOnAllPending(new b(1, code, throwable));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(String code, String message, Throwable throwable) {
        executeOnAllPending(new com.discord.age_assurance.a(code, message, throwable, 10));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(Throwable throwable) {
        Intrinsics.checkNotNullParameter(throwable, "throwable");
        executeOnAllPending(new e1(24, throwable));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(Throwable throwable, WritableMap userInfo) {
        Intrinsics.checkNotNullParameter(throwable, "throwable");
        Intrinsics.checkNotNullParameter(userInfo, "userInfo");
        executeOnAllPending(new b7.a(29, throwable, userInfo));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(String code, WritableMap userInfo) {
        Intrinsics.checkNotNullParameter(userInfo, "userInfo");
        executeOnAllPending(new b(2, code, userInfo));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(String code, Throwable throwable, WritableMap userInfo) {
        Intrinsics.checkNotNullParameter(userInfo, "userInfo");
        executeOnAllPending(new com.discord.age_assurance.a(code, throwable, userInfo, 11));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(String code, String message, WritableMap userInfo) {
        Intrinsics.checkNotNullParameter(userInfo, "userInfo");
        executeOnAllPending(new com.discord.age_assurance.a(code, message, userInfo, 9));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        executeOnAllPending(new com.discord.chat.bridge.spoiler.a(message, 6));
    }

    @Override // com.facebook.react.bridge.Promise
    public void reject(String code, String message, Throwable throwable, WritableMap userInfo) {
        executeOnAllPending(new com.discord.media.engine.video.a(code, message, throwable, userInfo));
    }
}
