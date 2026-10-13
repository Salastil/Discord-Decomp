package com.discord.file_downloader;

import com.discord.file_downloader.DownloadState;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.imagepipeline.nativecode.c;
import et.q;
import et.y;
import java.io.File;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;
import okhttp3.ResponseBody;

@Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/flow/FlowCollector;", "Lcom/discord/file_downloader/DownloadState;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.file_downloader.FileDownloader$downloadFile$1", f = "FileDownloader.kt", l = {ChatViewRecyclerTypes.PREMIUM_GROUP_INVITE, 61, 69, 76, 82}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class FileDownloader$downloadFile$1 extends h implements Function2<FlowCollector, Continuation, Object> {
    final /* synthetic */ File $downloadDirectory;
    final /* synthetic */ String $fileName;
    final /* synthetic */ String $fileUrl;
    final /* synthetic */ boolean $logErrors;
    private /* synthetic */ Object L$0;
    Object L$1;
    int label;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public FileDownloader$downloadFile$1(File file, String str, String str2, boolean z5, Continuation continuation) {
        super(2, continuation);
        this.$downloadDirectory = file;
        this.$fileName = str;
        this.$fileUrl = str2;
        this.$logErrors = z5;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        FileDownloader$downloadFile$1 fileDownloader$downloadFile$1 = new FileDownloader$downloadFile$1(this.$downloadDirectory, this.$fileName, this.$fileUrl, this.$logErrors, continuation);
        fileDownloader$downloadFile$1.L$0 = obj;
        return fileDownloader$downloadFile$1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x012e, code lost:
    
        if (r13 == null) goto L73;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0103, code lost:
    
        r13.close();
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x0101, code lost:
    
        if (r13 == null) goto L73;
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x00fa, code lost:
    
        if (r13.emit(r4, r12) == r1) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:79:0x007b, code lost:
    
        if (r13.emit(r2, r12) == r1) goto L68;
     */
    /* JADX WARN: Code restructure failed: missing block: B:81:0x008c, code lost:
    
        if (r13.emit(r0, r12) == r1) goto L68;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:38:0x0113 A[Catch: all -> 0x00c3, TryCatch #1 {all -> 0x00c3, blocks: (B:36:0x010f, B:38:0x0113, B:39:0x0116, B:48:0x0095, B:50:0x00a7, B:54:0x00cc, B:57:0x00e8, B:66:0x010b, B:67:0x010e), top: B:2:0x0009 }] */
    /* JADX WARN: Removed duplicated region for block: B:42:0x0129  */
    /* JADX WARN: Type inference failed for: r0v9, types: [T, okhttp3.ResponseBody] */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        Throwable th2;
        Ref.ObjectRef objectRef;
        FlowCollector flowCollector;
        Ref.ObjectRef objectRef2;
        FlowCollector flowCollector2;
        Exception exc;
        ?? r02;
        Ref.ObjectRef objectRef3;
        DownloadState.Failure failure;
        ResponseBody responseBody;
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        try {
        } catch (Throwable th3) {
            th2 = th3;
            objectRef = 2;
        }
        if (i5 == 0) {
            ki.b.R(obj);
            flowCollector = (FlowCollector) this.L$0;
            File file = new File(this.$downloadDirectory, this.$fileName);
            File parentFile = file.getParentFile();
            if (parentFile != null) {
                parentFile.mkdirs();
            }
            if (file.exists()) {
                DownloadState.Completed completed = new DownloadState.Completed(file);
                this.label = 1;
            } else {
                DownloadState.InProgress inProgress = DownloadState.InProgress.INSTANCE;
                this.L$0 = flowCollector;
                this.label = 2;
            }
            return aVar;
        }
        if (i5 == 1) {
            ki.b.R(obj);
            return Unit.a;
        }
        if (i5 != 2) {
            if (i5 == 3 || i5 == 4) {
                objectRef3 = (Ref.ObjectRef) this.L$1;
                flowCollector2 = (FlowCollector) this.L$0;
                try {
                    ki.b.R(obj);
                    responseBody = (ResponseBody) objectRef3.element;
                } catch (Exception e9) {
                    exc = e9;
                    objectRef2 = objectRef3;
                    if (this.$logErrors) {
                    }
                    failure = new DownloadState.Failure(exc);
                    this.L$0 = objectRef2;
                    this.L$1 = null;
                    this.label = 5;
                    if (flowCollector2.emit(failure, this) != aVar) {
                    }
                    return aVar;
                } catch (Throwable th4) {
                    th2 = th4;
                    objectRef = objectRef3;
                }
            } else {
                if (i5 != 5) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                objectRef = (Ref.ObjectRef) this.L$0;
                try {
                    ki.b.R(obj);
                    responseBody = (ResponseBody) objectRef.element;
                } catch (Throwable th5) {
                    th2 = th5;
                }
            }
            ResponseBody responseBody2 = (ResponseBody) objectRef.element;
            if (responseBody2 == null) {
                throw th2;
            }
            responseBody2.close();
            throw th2;
        }
        FlowCollector flowCollector3 = (FlowCollector) this.L$0;
        ki.b.R(obj);
        flowCollector = flowCollector3;
        objectRef2 = new Ref.ObjectRef();
        try {
            r02 = FileDownloader.downloadBlob$default(FileDownloader.INSTANCE, this.$fileUrl, null, null, 6, null).f16091y;
            objectRef2.element = r02;
        } catch (Exception e10) {
            flowCollector2 = flowCollector;
            exc = e10;
            if (this.$logErrors) {
                exc.printStackTrace();
            }
            failure = new DownloadState.Failure(exc);
            this.L$0 = objectRef2;
            this.L$1 = null;
            this.label = 5;
            if (flowCollector2.emit(failure, this) != aVar) {
                objectRef = objectRef2;
                responseBody = (ResponseBody) objectRef.element;
            }
            return aVar;
        }
        if (r02 == 0) {
            DownloadState.Failure failure2 = new DownloadState.Failure(new IllegalStateException("No file found"));
            this.L$0 = flowCollector;
            this.L$1 = objectRef2;
            this.label = 3;
            if (flowCollector.emit(failure2, this) == aVar) {
                return aVar;
            }
            objectRef3 = objectRef2;
        } else {
            File file2 = new File(this.$downloadDirectory, this.$fileName);
            q c6 = y.c(y.k(file2));
            try {
                c6.J(((ResponseBody) objectRef2.element).source());
                c6.close();
                DownloadState.Completed completed2 = new DownloadState.Completed(file2);
                this.L$0 = flowCollector;
                this.L$1 = objectRef2;
                this.label = 4;
            } catch (Throwable th6) {
                try {
                    throw th6;
                } catch (Throwable th7) {
                    c.j(c6, th6);
                    throw th7;
                }
            }
        }
        responseBody = (ResponseBody) objectRef3.element;
        return Unit.a;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(FlowCollector flowCollector, Continuation continuation) {
        return ((FileDownloader$downloadFile$1) create(flowCollector, continuation)).invokeSuspend(Unit.a);
    }
}
