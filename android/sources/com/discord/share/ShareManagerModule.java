package com.discord.share;

import android.app.Activity;
import android.content.ClipData;
import android.content.Intent;
import android.net.Uri;
import com.discord.codegen.NativeShareManagerModuleSpec;
import com.discord.lifecycle.AppEntryActivityRegistry;
import com.discord.misc.utilities.activity.ActivityUtilities;
import com.discord.misc.utilities.threading.ThreadUtilsKt;
import com.discord.share.ShareBroadcastReceiver;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.BaseJavaModule;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.concurrent.CancellationException;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import ur.d;
import ur.e;

@Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0006\n\u0002\b\t\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\u0010\u0010\u0010\u001a\u00020\u000f2\u0006\u0010\u0011\u001a\u00020\u0012H\u0016J\u0010\u0010\u0013\u001a\u00020\u000f2\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J\u001c\u0010\u0016\u001a\u00020\u000f2\b\u0010\u0017\u001a\u0004\u0018\u00010\u00122\b\u0010\u0018\u001a\u0004\u0018\u00010\u0012H\u0016J\u001c\u0010\u0019\u001a\u00020\u000f2\b\u0010\u001a\u001a\u0004\u0018\u00010\u00122\b\u0010\u001b\u001a\u0004\u0018\u00010\u0012H\u0016J \u0010\u001c\u001a\u00020\u000f2\u0006\u0010\u001d\u001a\u00020\u00122\u0006\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020!H\u0016JJ\u0010\"\u001a\u00020\u000f2\b\u0010#\u001a\u0004\u0018\u00010\u00122\b\u0010$\u001a\u0004\u0018\u00010\u00122\b\u0010%\u001a\u0004\u0018\u00010\u00122\b\u0010&\u001a\u0004\u0018\u00010\u00122\b\u0010'\u001a\u0004\u0018\u00010(2\u0006\u0010)\u001a\u00020*2\u0006\u0010 \u001a\u00020!H\u0016J8\u0010+\u001a\u00020\u000f2\b\u0010#\u001a\u0004\u0018\u00010\u00122\b\u0010$\u001a\u0004\u0018\u00010\u00122\b\u0010%\u001a\u0004\u0018\u00010\u00122\b\u0010&\u001a\u0004\u0018\u00010\u00122\u0006\u0010 \u001a\u00020!H\u0002J\b\u0010,\u001a\u00020\u000fH\u0016J\b\u0010-\u001a\u00020\u000fH\u0016J\b\u0010.\u001a\u00020\u000fH\u0016R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\f\u001a\u0004\u0018\u00010\rX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006/"}, d2 = {"Lcom/discord/share/ShareManagerModule;", "Lcom/discord/codegen/NativeShareManagerModuleSpec;", "reactContext", "Lcom/facebook/react/bridge/ReactApplicationContext;", "<init>", "(Lcom/facebook/react/bridge/ReactApplicationContext;)V", "getReactContext", "()Lcom/facebook/react/bridge/ReactApplicationContext;", "shareBroadcastReceiver", "Lcom/discord/share/ShareBroadcastReceiver;", "scope", "Lkotlinx/coroutines/CoroutineScope;", "currentShareJob", "Lkotlinx/coroutines/Job;", "invalidate", "", "addListener", "eventName", "", "removeListeners", "count", "", "setAuthenticationToken", "authenticationToken", "superProperties", "setSelectedChannel", "channelJSON", "guildJSON", "sharedAttachments", "shareID", "attachmentManifest", "Lcom/facebook/react/bridge/ReadableArray;", BaseJavaModule.METHOD_TYPE_PROMISE, "Lcom/facebook/react/bridge/Promise;", "share", "text", "url", "chooserText", "location", "mediaStagingOptions", "Lcom/facebook/react/bridge/ReadableMap;", "onStagingComplete", "Lcom/facebook/react/bridge/Callback;", "presentShare", "cancelPendingShare", "close", "launchApp", "share_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nShareManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ShareManagerModule.kt\ncom/discord/share/ShareManagerModule\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,172:1\n1#2:173\n*E\n"})
/* loaded from: classes.dex */
public final class ShareManagerModule extends NativeShareManagerModuleSpec {
    private Job currentShareJob;

    @NotNull
    private final ReactApplicationContext reactContext;

    @NotNull
    private final CoroutineScope scope;

    @NotNull
    private final ShareBroadcastReceiver shareBroadcastReceiver;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ShareManagerModule(@NotNull ReactApplicationContext reactContext) {
        super(reactContext);
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        this.reactContext = reactContext;
        this.shareBroadcastReceiver = new ShareBroadcastReceiver(reactContext);
        e eVar = g0.a;
        this.scope = x.b(d.f19093i);
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:13:0x0034  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x008f  */
    /* JADX WARN: Removed duplicated region for block: B:31:0x0064  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void presentShare(String text, String url, String chooserText, String location, Promise promise) {
        Uri uri;
        Activity currentActivity;
        if ((text == null || StringsKt.K(text)) && (url == null || StringsKt.K(url))) {
            promise.reject("SHARE_NO_ITEMS", "Cannot share without text or a URL");
            return;
        }
        if (url != null) {
            String str = kotlin.text.x.o(url, "content://", false) ? url : null;
            if (str != null) {
                uri = Uri.parse(str);
                Intent intent = new Intent("android.intent.action.SEND");
                if (uri == null) {
                    String type = getReactApplicationContext().getContentResolver().getType(uri);
                    if (type == null) {
                        type = "*/*";
                    }
                    intent.setType(type);
                    intent.putExtra("android.intent.extra.STREAM", uri);
                    intent.setClipData(ClipData.newRawUri(null, uri));
                    if (text != null && !StringsKt.K(text)) {
                        intent.putExtra("android.intent.extra.TEXT", text);
                    }
                    intent.addFlags(1);
                } else {
                    intent.setType("text/plain");
                    String[] elements = {text, url};
                    Intrinsics.checkNotNullParameter(elements, "elements");
                    intent.putExtra("android.intent.extra.TEXT", CollectionsKt.O(kotlin.collections.x.r(elements), ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE, null, null, null, 62));
                }
                currentActivity = getReactApplicationContext().getCurrentActivity();
                if (currentActivity != null) {
                    ActivityUtilities activityUtilities = ActivityUtilities.INSTANCE;
                    if (chooserText == null) {
                        chooserText = "";
                    }
                    ShareBroadcastReceiver.Companion companion = ShareBroadcastReceiver.INSTANCE;
                    ReactApplicationContext reactApplicationContext = getReactApplicationContext();
                    Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
                    Intent createChooser = Intent.createChooser(intent, chooserText, companion.getPendingIntentSender(reactApplicationContext, location));
                    Intrinsics.checkNotNullExpressionValue(createChooser, "createChooser(...)");
                    ActivityUtilities.startActivityAsync$default(activityUtilities, currentActivity, createChooser, null, 4, null);
                }
                promise.resolve(null);
            }
        }
        uri = null;
        Intent intent2 = new Intent("android.intent.action.SEND");
        if (uri == null) {
        }
        currentActivity = getReactApplicationContext().getCurrentActivity();
        if (currentActivity != null) {
        }
        promise.resolve(null);
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void addListener(@NotNull String eventName) {
        Intrinsics.checkNotNullParameter(eventName, "eventName");
        ShareBroadcastReceiver.Companion companion = ShareBroadcastReceiver.INSTANCE;
        ReactApplicationContext reactApplicationContext = getReactApplicationContext();
        Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
        companion.register(reactApplicationContext, this.shareBroadcastReceiver);
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void cancelPendingShare() {
        Job job = this.currentShareJob;
        if (job != null) {
            job.f(null);
        }
        this.currentShareJob = null;
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void close() {
        Activity activityForAppEntry = AppEntryActivityRegistry.INSTANCE.getActivityForAppEntry("share");
        if (activityForAppEntry == null) {
            return;
        }
        ThreadUtilsKt.getUiExecutor().execute(new a(activityForAppEntry, 0));
    }

    @NotNull
    public final ReactApplicationContext getReactContext() {
        return this.reactContext;
    }

    @Override // com.facebook.react.bridge.BaseJavaModule, com.facebook.react.bridge.NativeModule, com.facebook.react.turbomodule.core.interfaces.TurboModule
    public void invalidate() {
        super.invalidate();
        x.f(this.scope, new CancellationException("Module destroyed"));
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void launchApp() {
        Intent launchIntentForPackage = this.reactContext.getPackageManager().getLaunchIntentForPackage(this.reactContext.getPackageName());
        if (launchIntentForPackage == null) {
            return;
        }
        ActivityUtilities.startActivityAsync$default(ActivityUtilities.INSTANCE, this.reactContext, launchIntentForPackage, null, 4, null);
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void removeListeners(double count) {
        try {
            ShareBroadcastReceiver.Companion companion = ShareBroadcastReceiver.INSTANCE;
            ReactApplicationContext reactApplicationContext = getReactApplicationContext();
            Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "getReactApplicationContext(...)");
            companion.unregister(reactApplicationContext, this.shareBroadcastReceiver);
        } catch (Exception unused) {
        }
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void setAuthenticationToken(String authenticationToken, String superProperties) {
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void setSelectedChannel(String channelJSON, String guildJSON) {
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void share(String text, String url, String chooserText, String location, ReadableMap mediaStagingOptions, @NotNull Callback onStagingComplete, @NotNull Promise promise) {
        Long l6;
        ReadableMap readableMap = mediaStagingOptions;
        Intrinsics.checkNotNullParameter(onStagingComplete, "onStagingComplete");
        Intrinsics.checkNotNullParameter(promise, "promise");
        cancelPendingShare();
        String string = readableMap != null ? readableMap.getString("url") : null;
        String string2 = readableMap != null ? readableMap.getString("mediaType") : null;
        String string3 = readableMap != null ? readableMap.getString("fileExtension") : null;
        if (string == null || string2 == null || string3 == null) {
            presentShare(text, url, chooserText, location, promise);
            return;
        }
        if (readableMap != null) {
            if (!readableMap.hasKey("presentDelayMs")) {
                readableMap = null;
            }
            if (readableMap != null) {
                l6 = Long.valueOf(readableMap.getInt("presentDelayMs"));
                this.currentShareJob = x.t(this.scope, null, new ShareManagerModule$share$1(this, string, string3, string2, promise, url, onStagingComplete, l6, text, chooserText, location, null), 3);
            }
        }
        l6 = null;
        this.currentShareJob = x.t(this.scope, null, new ShareManagerModule$share$1(this, string, string3, string2, promise, url, onStagingComplete, l6, text, chooserText, location, null), 3);
    }

    @Override // com.discord.codegen.NativeShareManagerModuleSpec
    public void sharedAttachments(@NotNull String shareID, @NotNull ReadableArray attachmentManifest, @NotNull Promise promise) {
        Intrinsics.checkNotNullParameter(shareID, "shareID");
        Intrinsics.checkNotNullParameter(attachmentManifest, "attachmentManifest");
        Intrinsics.checkNotNullParameter(promise, "promise");
        promise.resolve(Arguments.createArray());
    }
}
