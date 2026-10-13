package com.discord.media;

import com.discord.file_downloader.DownloadState;
import com.discord.file_downloader.PublicFileDownloader;
import com.discord.media.utils.MediaAssetUtils;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import fo.n;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.media.MediaManagerModule$downloadMediaAssetWithContentType$1", f = "MediaManagerModule.kt", l = {177}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class MediaManagerModule$downloadMediaAssetWithContentType$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $contentType;
    final /* synthetic */ Promise $promise;
    final /* synthetic */ String $uri;
    int label;
    final /* synthetic */ MediaManagerModule this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public MediaManagerModule$downloadMediaAssetWithContentType$1(String str, String str2, MediaManagerModule mediaManagerModule, Promise promise, Continuation continuation) {
        super(2, continuation);
        this.$uri = str;
        this.$contentType = str2;
        this.this$0 = mediaManagerModule;
        this.$promise = promise;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new MediaManagerModule$downloadMediaAssetWithContentType$1(this.$uri, this.$contentType, this.this$0, this.$promise, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ReactApplicationContext reactApplicationContext;
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            String guessFileName = MediaAssetUtils.INSTANCE.guessFileName(this.$uri, this.$contentType);
            PublicFileDownloader publicFileDownloader = PublicFileDownloader.INSTANCE;
            reactApplicationContext = this.this$0.getReactApplicationContext();
            Intrinsics.checkNotNullExpressionValue(reactApplicationContext, "access$getReactApplicationContext(...)");
            Flow downloadFile$default = PublicFileDownloader.downloadFile$default(publicFileDownloader, reactApplicationContext, this.$uri, guessFileName, null, 8, null);
            final Promise promise = this.$promise;
            FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.media.MediaManagerModule$downloadMediaAssetWithContentType$1.1
                @Override // kotlinx.coroutines.flow.FlowCollector
                public final Object emit(DownloadState downloadState, Continuation continuation) {
                    if (downloadState instanceof DownloadState.Completed) {
                        Promise.this.resolve(null);
                    } else if (downloadState instanceof DownloadState.Failure) {
                        Promise.this.reject(new IllegalStateException("Unable to download asset."));
                    } else if (!(downloadState instanceof DownloadState.InProgress)) {
                        throw new n();
                    }
                    return Unit.a;
                }
            };
            this.label = 1;
            if (downloadFile$default.collect(flowCollector, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((MediaManagerModule$downloadMediaAssetWithContentType$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
