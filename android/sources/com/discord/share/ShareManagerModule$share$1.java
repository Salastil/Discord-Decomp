package com.discord.share;

import android.net.Uri;
import com.discord.logging.Log;
import com.discord.share.util.MediaShareUtilsKt;
import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import java.util.concurrent.CancellationException;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.share.ShareManagerModule$share$1", f = "ShareManagerModule.kt", l = {91, 101}, m = "invokeSuspend")
@SourceDebugExtension({"SMAP\nShareManagerModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ShareManagerModule.kt\ncom/discord/share/ShareManagerModule$share$1\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,172:1\n1#2:173\n*E\n"})
/* loaded from: classes.dex */
public final class ShareManagerModule$share$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $chooserText;
    final /* synthetic */ String $fileExtension;
    final /* synthetic */ String $location;
    final /* synthetic */ String $mediaType;
    final /* synthetic */ Callback $onStagingComplete;
    final /* synthetic */ Long $presentDelayMs;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $stagingUrl;
    final /* synthetic */ String $text;
    final /* synthetic */ String $url;
    Object L$0;
    int label;
    final /* synthetic */ ShareManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ShareManagerModule$share$1(ShareManagerModule shareManagerModule, String str, String str2, String str3, Promise promise, String str4, Callback callback, Long l6, String str5, String str6, String str7, Continuation continuation) {
        super(2, continuation);
        this.this$0 = shareManagerModule;
        this.$stagingUrl = str;
        this.$fileExtension = str2;
        this.$mediaType = str3;
        this.$promise = promise;
        this.$url = str4;
        this.$onStagingComplete = callback;
        this.$presentDelayMs = l6;
        this.$text = str5;
        this.$chooserText = str6;
        this.$location = str7;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new ShareManagerModule$share$1(this.this$0, this.$stagingUrl, this.$fileExtension, this.$mediaType, this.$promise, this.$url, this.$onStagingComplete, this.$presentDelayMs, this.$text, this.$chooserText, this.$location, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:19:0x0094, code lost:
    
        if (nr.x.j(r4, r8) == r2) goto L30;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        String str;
        String str2;
        ReactApplicationContext reactApplicationContext;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        try {
            try {
            } catch (CancellationException e9) {
                this.$promise.resolve(null);
                throw e9;
            } catch (Exception e10) {
                Log.INSTANCE.w(Reflection.getOrCreateKotlinClass(ShareManagerModule.class), "share_" + this.$mediaType + "_failed: staging failed, sharing link instead", e10);
                str = this.$url;
                this.$onStagingComplete.invoke(new Object[0]);
            }
            if (i5 == 0) {
                b.R(obj);
                reactApplicationContext = this.this$0.getReactApplicationContext();
                Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "access$getReactApplicationContext(...)");
                String str3 = this.$stagingUrl;
                String str4 = this.$fileExtension;
                String str5 = this.$mediaType;
                this.label = 1;
                obj = MediaShareUtilsKt.stageShareableMedia(reactApplicationContext, str3, str4, str5, this);
                if (obj == aVar) {
                    return aVar;
                }
            } else {
                if (i5 != 1) {
                    if (i5 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    str2 = (String) this.L$0;
                    b.R(obj);
                    this.this$0.presentShare(this.$text, str2, this.$chooserText, this.$location, this.$promise);
                    return Unit.a;
                }
                b.R(obj);
            }
            str = ((Uri) obj).toString();
            this.$onStagingComplete.invoke(new Object[0]);
            str2 = str;
            Long l6 = this.$presentDelayMs;
            if (l6 != null) {
                long longValue = l6.longValue();
                this.L$0 = str2;
                this.label = 2;
            }
            this.this$0.presentShare(this.$text, str2, this.$chooserText, this.$location, this.$promise);
            return Unit.a;
        } catch (Throwable th2) {
            this.$onStagingComplete.invoke(new Object[0]);
            throw th2;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((ShareManagerModule$share$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
