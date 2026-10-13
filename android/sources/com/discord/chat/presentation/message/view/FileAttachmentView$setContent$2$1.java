package com.discord.chat.presentation.message.view;

import android.content.Context;
import android.widget.ProgressBar;
import com.discord.chat.databinding.FileAttachmentViewBinding;
import com.discord.file_downloader.DownloadState;
import com.discord.file_downloader.PublicFileDownloader;
import com.facebook.drawee.view.SimpleDraweeView;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import nr.g0;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@lo.d(c = "com.discord.chat.presentation.message.view.FileAttachmentView$setContent$2$1", f = "FileAttachmentView.kt", l = {105}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class FileAttachmentView$setContent$2$1 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ String $attachmentDescription;
    final /* synthetic */ String $attachmentName;
    final /* synthetic */ String $url;
    int label;
    final /* synthetic */ FileAttachmentView this$0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileAttachmentView$setContent$2$1(FileAttachmentView fileAttachmentView, String str, String str2, String str3, Continuation continuation) {
        super(2, continuation);
        this.this$0 = fileAttachmentView;
        this.$url = str;
        this.$attachmentName = str2;
        this.$attachmentDescription = str3;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new FileAttachmentView$setContent$2$1(this.this$0, this.$url, this.$attachmentName, this.$attachmentDescription, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            PublicFileDownloader publicFileDownloader = PublicFileDownloader.INSTANCE;
            Context context = this.this$0.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            Flow downloadFile = publicFileDownloader.downloadFile(context, this.$url, this.$attachmentName, this.$attachmentDescription);
            final FileAttachmentView fileAttachmentView = this.this$0;
            FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.chat.presentation.message.view.FileAttachmentView$setContent$2$1.1

                @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
                @lo.d(c = "com.discord.chat.presentation.message.view.FileAttachmentView$setContent$2$1$1$1", f = "FileAttachmentView.kt", l = {}, m = "invokeSuspend")
                @SourceDebugExtension({"SMAP\nFileAttachmentView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FileAttachmentView.kt\ncom/discord/chat/presentation/message/view/FileAttachmentView$setContent$2$1$1$1\n+ 2 View.kt\nandroidx/core/view/ViewKt\n*L\n1#1,151:1\n257#2,2:152\n257#2,2:154\n*S KotlinDebug\n*F\n+ 1 FileAttachmentView.kt\ncom/discord/chat/presentation/message/view/FileAttachmentView$setContent$2$1$1$1\n*L\n108#1:152,2\n109#1:154,2\n*E\n"})
                /* renamed from: com.discord.chat.presentation.message.view.FileAttachmentView$setContent$2$1$1$1, reason: invalid class name and collision with other inner class name */
                public static final class C00121 extends lo.h implements Function2<CoroutineScope, Continuation, Object> {
                    final /* synthetic */ DownloadState $downloadState;
                    int label;
                    final /* synthetic */ FileAttachmentView this$0;

                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    public C00121(DownloadState downloadState, FileAttachmentView fileAttachmentView, Continuation continuation) {
                        super(2, continuation);
                        this.$downloadState = downloadState;
                        this.this$0 = fileAttachmentView;
                    }

                    @Override // lo.a
                    public final Continuation create(Object obj, Continuation continuation) {
                        return new C00121(this.$downloadState, this.this$0, continuation);
                    }

                    @Override // lo.a
                    public final Object invokeSuspend(Object obj) {
                        FileAttachmentViewBinding fileAttachmentViewBinding;
                        FileAttachmentViewBinding fileAttachmentViewBinding2;
                        ko.a aVar = ko.a.f13464d;
                        if (this.label != 0) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                        boolean z5 = this.$downloadState instanceof DownloadState.InProgress;
                        fileAttachmentViewBinding = this.this$0.binding;
                        ProgressBar fileAttachmentDownloadProgressBar = fileAttachmentViewBinding.fileAttachmentDownloadProgressBar;
                        Intrinsics.checkNotNullExpressionValue(fileAttachmentDownloadProgressBar, "fileAttachmentDownloadProgressBar");
                        fileAttachmentDownloadProgressBar.setVisibility(z5 ? 0 : 8);
                        fileAttachmentViewBinding2 = this.this$0.binding;
                        SimpleDraweeView fileAttachmentDownload = fileAttachmentViewBinding2.fileAttachmentDownload;
                        Intrinsics.checkNotNullExpressionValue(fileAttachmentDownload, "fileAttachmentDownload");
                        fileAttachmentDownload.setVisibility(z5 ? 8 : 0);
                        return Unit.a;
                    }

                    @Override // kotlin.jvm.functions.Function2
                    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                        return ((C00121) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
                    }
                }

                @Override // kotlinx.coroutines.flow.FlowCollector
                public final Object emit(DownloadState downloadState, Continuation continuation) {
                    ur.e eVar = g0.a;
                    Object A = nr.x.A(sr.q.a, new C00121(downloadState, FileAttachmentView.this, null), continuation);
                    return A == ko.a.f13464d ? A : Unit.a;
                }
            };
            this.label = 1;
            if (downloadFile.collect(flowCollector, this) == aVar) {
                return aVar;
            }
        } else {
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
        }
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((FileAttachmentView$setContent$2$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
