package com.discord.file_downloader;

import android.app.DownloadManager;
import android.content.Context;
import com.discord.file_downloader.DownloadState;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.channels.ProducerScope;
import lo.d;
import lo.h;
import ys.l;

@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/channels/ProducerScope;", "Lcom/discord/file_downloader/DownloadState;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_downloader.PublicFileDownloader$downloadFile$1", f = "PublicFileDownloader.kt", l = {30, ChatViewRecyclerTypes.POLL_IMAGE_ONLY, l.a}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class PublicFileDownloader$downloadFile$1 extends h implements Function2<ProducerScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    final /* synthetic */ String $description;
    final /* synthetic */ String $fileName;
    final /* synthetic */ String $url;
    private /* synthetic */ Object L$0;
    Object L$1;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public PublicFileDownloader$downloadFile$1(Context context, String str, String str2, String str3, Continuation continuation) {
        super(2, continuation);
        this.$context = context;
        this.$url = str;
        this.$fileName = str2;
        this.$description = str3;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$0(Ref.LongRef longRef, ProducerScope producerScope, DownloadManager downloadManager, String str) {
        PublicFileDownloader.onDownloadListeners.remove(Long.valueOf(longRef.element));
        PublicFileDownloader.INSTANCE.onFileDownloaded(producerScope, downloadManager, longRef.element, str);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit invokeSuspend$lambda$1(Ref.LongRef longRef) {
        PublicFileDownloader.onDownloadListeners.remove(Long.valueOf(longRef.element));
        return Unit.a;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        PublicFileDownloader$downloadFile$1 publicFileDownloader$downloadFile$1 = new PublicFileDownloader$downloadFile$1(this.$context, this.$url, this.$fileName, this.$description, continuation);
        publicFileDownloader$downloadFile$1.L$0 = obj;
        return publicFileDownloader$downloadFile$1;
    }

    /* JADX WARN: Can't wrap try/catch for region: R(11:0|1|(1:(1:(1:(3:6|7|8)(2:10|11))(6:12|13|14|15|16|17))(1:23))(1:37)|24|25|26|(2:31|17)|32|(4:34|15|16|17)|19|(1:(0))) */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x00d9, code lost:
    
        if (zo.c0.f(r11, r1, r10) != r0) goto L38;
     */
    /* JADX WARN: Code restructure failed: missing block: B:35:0x0098, code lost:
    
        r1 = move-exception;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x0099, code lost:
    
        r3 = r11;
        r11 = r1;
        r1 = r4;
     */
    /* JADX WARN: Code restructure failed: missing block: B:38:0x0047, code lost:
    
        if (r11.p(r1, r10) == r0) goto L37;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        final ProducerScope producerScope;
        final Ref.LongRef longRef;
        ProducerScope producerScope2;
        Ref.LongRef longRef2;
        DownloadManager.Request fileDownloadRequest;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            producerScope = (ProducerScope) this.L$0;
            DownloadState.InProgress inProgress = DownloadState.InProgress.INSTANCE;
            this.L$0 = producerScope;
            this.label = 1;
        } else if (i5 == 1) {
            ProducerScope producerScope3 = (ProducerScope) this.L$0;
            ki.b.R(obj);
            producerScope = producerScope3;
        } else {
            if (i5 != 2) {
                if (i5 != 3) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return Unit.a;
            }
            longRef2 = (Ref.LongRef) this.L$1;
            producerScope2 = (ProducerScope) this.L$0;
            try {
                ki.b.R(obj);
                producerScope2.k(null);
            } catch (Exception e9) {
                Exception e10 = e9;
                producerScope2.n(new DownloadState.Failure(e10));
                producerScope2.k(null);
                longRef = longRef2;
                producerScope = producerScope2;
                Function0 function0 = new Function0() { // from class: com.discord.file_downloader.b
                    @Override // kotlin.jvm.functions.Function0
                    public final Object invoke() {
                        Unit invokeSuspend$lambda$1;
                        invokeSuspend$lambda$1 = PublicFileDownloader$downloadFile$1.invokeSuspend$lambda$1(Ref.LongRef.this);
                        return invokeSuspend$lambda$1;
                    }
                };
                this.L$0 = null;
                this.L$1 = null;
                this.label = 3;
            }
            longRef = longRef2;
            producerScope = producerScope2;
            Function0 function02 = new Function0() { // from class: com.discord.file_downloader.b
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    Unit invokeSuspend$lambda$1;
                    invokeSuspend$lambda$1 = PublicFileDownloader$downloadFile$1.invokeSuspend$lambda$1(Ref.LongRef.this);
                    return invokeSuspend$lambda$1;
                }
            };
            this.L$0 = null;
            this.L$1 = null;
            this.label = 3;
        }
        Object systemService = this.$context.getSystemService("download");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.app.DownloadManager");
        final DownloadManager downloadManager = (DownloadManager) systemService;
        longRef = new Ref.LongRef();
        longRef.element = -1L;
        fileDownloadRequest = PublicFileDownloader.INSTANCE.getFileDownloadRequest(this.$url, this.$fileName, this.$description);
        long enqueue = downloadManager.enqueue(fileDownloadRequest);
        longRef.element = enqueue;
        if (enqueue != 0 && enqueue != 1) {
            Map map = PublicFileDownloader.onDownloadListeners;
            Long l6 = new Long(longRef.element);
            final String str = this.$fileName;
            map.put(l6, new Function0() { // from class: com.discord.file_downloader.a
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    Unit invokeSuspend$lambda$0;
                    invokeSuspend$lambda$0 = PublicFileDownloader$downloadFile$1.invokeSuspend$lambda$0(Ref.LongRef.this, producerScope, downloadManager, str);
                    return invokeSuspend$lambda$0;
                }
            });
            Function0 function022 = new Function0() { // from class: com.discord.file_downloader.b
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    Unit invokeSuspend$lambda$1;
                    invokeSuspend$lambda$1 = PublicFileDownloader$downloadFile$1.invokeSuspend$lambda$1(Ref.LongRef.this);
                    return invokeSuspend$lambda$1;
                }
            };
            this.L$0 = null;
            this.L$1 = null;
            this.label = 3;
        }
        DownloadState.Failure failure = new DownloadState.Failure(new IllegalStateException("Download Manager returned an invalid download id"));
        this.L$0 = producerScope;
        this.L$1 = longRef;
        this.label = 2;
        if (producerScope.p(failure, this) != aVar) {
            producerScope2 = producerScope;
            longRef2 = longRef;
            producerScope2.k(null);
            longRef = longRef2;
            producerScope = producerScope2;
            Function0 function0222 = new Function0() { // from class: com.discord.file_downloader.b
                @Override // kotlin.jvm.functions.Function0
                public final Object invoke() {
                    Unit invokeSuspend$lambda$1;
                    invokeSuspend$lambda$1 = PublicFileDownloader$downloadFile$1.invokeSuspend$lambda$1(Ref.LongRef.this);
                    return invokeSuspend$lambda$1;
                }
            };
            this.L$0 = null;
            this.L$1 = null;
            this.label = 3;
        }
        return aVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(ProducerScope producerScope, Continuation continuation) {
        return ((PublicFileDownloader$downloadFile$1) create(producerScope, continuation)).invokeSuspend(Unit.a);
    }
}
