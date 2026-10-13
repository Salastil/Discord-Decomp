package com.discord.sounds.utils;

import android.content.Context;
import com.discord.file_downloader.DownloadState;
import com.discord.file_downloader.FileDownloader;
import com.discord.logging.Log;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.discord.sounds.SoundManager;
import java.io.File;
import ki.b;
import ko.a;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;
import nr.g0;
import sr.q;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.sounds.utils.SoundExtensionsKt$fetchSound$1", f = "SoundExtensions.kt", l = {ChatViewRecyclerTypes.REACTION_ADD_REACTION}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class SoundExtensionsKt$fetchSound$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Context $context;
    final /* synthetic */ String $fileName;
    final /* synthetic */ int $key;
    final /* synthetic */ File $soundDirectory;
    final /* synthetic */ SoundManager $soundManager;
    final /* synthetic */ Function1<Integer, Unit> $soundResIdPrepared;
    final /* synthetic */ String $url;
    final /* synthetic */ int $usage;
    int label;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    /* renamed from: com.discord.sounds.utils.SoundExtensionsKt$fetchSound$1$1, reason: invalid class name */
    public static final class AnonymousClass1<T> implements FlowCollector {
        final /* synthetic */ int $key;
        final /* synthetic */ SoundManager $soundManager;
        final /* synthetic */ Function1<Integer, Unit> $soundResIdPrepared;
        final /* synthetic */ int $usage;

        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
        @d(c = "com.discord.sounds.utils.SoundExtensionsKt$fetchSound$1$1$1", f = "SoundExtensions.kt", l = {}, m = "invokeSuspend")
        /* renamed from: com.discord.sounds.utils.SoundExtensionsKt$fetchSound$1$1$1, reason: invalid class name and collision with other inner class name */
        public static final class C00171 extends h implements Function2<CoroutineScope, Continuation, Object> {
            final /* synthetic */ DownloadState $downloadState;
            final /* synthetic */ int $key;
            final /* synthetic */ SoundManager $soundManager;
            final /* synthetic */ Function1<Integer, Unit> $soundResIdPrepared;
            final /* synthetic */ int $usage;
            int label;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            /* JADX WARN: Multi-variable type inference failed */
            public C00171(SoundManager soundManager, int i5, int i6, DownloadState downloadState, Function1<? super Integer, Unit> function1, Continuation continuation) {
                super(2, continuation);
                this.$soundManager = soundManager;
                this.$key = i5;
                this.$usage = i6;
                this.$downloadState = downloadState;
                this.$soundResIdPrepared = function1;
            }

            @Override // lo.a
            public final Continuation create(Object obj, Continuation continuation) {
                return new C00171(this.$soundManager, this.$key, this.$usage, this.$downloadState, this.$soundResIdPrepared, continuation);
            }

            @Override // lo.a
            public final Object invokeSuspend(Object obj) {
                a aVar = a.f13464d;
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
                this.$soundManager.prepare(this.$key, this.$usage, null, ((DownloadState.Completed) this.$downloadState).getFile().getAbsolutePath(), this.$soundResIdPrepared);
                return Unit.a;
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                return ((C00171) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
            }
        }

        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
        @d(c = "com.discord.sounds.utils.SoundExtensionsKt$fetchSound$1$1$2", f = "SoundExtensions.kt", l = {}, m = "invokeSuspend")
        /* renamed from: com.discord.sounds.utils.SoundExtensionsKt$fetchSound$1$1$2, reason: invalid class name */
        public static final class AnonymousClass2 extends h implements Function2<CoroutineScope, Continuation, Object> {
            final /* synthetic */ Exception $e;
            int label;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            public AnonymousClass2(Exception exc, Continuation continuation) {
                super(2, continuation);
                this.$e = exc;
            }

            @Override // lo.a
            public final Continuation create(Object obj, Continuation continuation) {
                return new AnonymousClass2(this.$e, continuation);
            }

            @Override // lo.a
            public final Object invokeSuspend(Object obj) {
                a aVar = a.f13464d;
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
                Log.INSTANCE.w(SoundManager.INSTANCE.getLogTag(), "Failed to download sound.", this.$e);
                return Unit.a;
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
            }
        }

        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
        @d(c = "com.discord.sounds.utils.SoundExtensionsKt$fetchSound$1$1$3", f = "SoundExtensions.kt", l = {}, m = "invokeSuspend")
        /* renamed from: com.discord.sounds.utils.SoundExtensionsKt$fetchSound$1$1$3, reason: invalid class name */
        public static final class AnonymousClass3 extends h implements Function2<CoroutineScope, Continuation, Object> {
            int label;

            public AnonymousClass3(Continuation continuation) {
                super(2, continuation);
            }

            @Override // lo.a
            public final Continuation create(Object obj, Continuation continuation) {
                return new AnonymousClass3(continuation);
            }

            @Override // lo.a
            public final Object invokeSuspend(Object obj) {
                a aVar = a.f13464d;
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
                return Unit.a;
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                return ((AnonymousClass3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
            }
        }

        /* JADX WARN: Multi-variable type inference failed */
        public AnonymousClass1(SoundManager soundManager, int i5, int i6, Function1<? super Integer, Unit> function1) {
            this.$soundManager = soundManager;
            this.$key = i5;
            this.$usage = i6;
            this.$soundResIdPrepared = function1;
        }

        /* JADX WARN: Can't wrap try/catch for region: R(10:0|1|(2:3|(6:5|6|7|(1:(1:(1:(3:12|13|14)(2:16|17))(3:18|19|20))(4:21|22|19|20))(3:24|(1:26)(1:29)|28)|31|32))|34|6|7|(0)(0)|31|32|(1:(0))) */
        /* JADX WARN: Code restructure failed: missing block: B:27:0x0065, code lost:
        
            if (nr.x.A(r0, r9, r2) == r3) goto L33;
         */
        /* JADX WARN: Code restructure failed: missing block: B:30:0x008c, code lost:
        
            if (nr.x.A(r0, r4, r2) == r3) goto L33;
         */
        /* JADX WARN: Code restructure failed: missing block: B:33:0x0077, code lost:
        
            if (nr.x.A(r4, r6, r2) != r3) goto L29;
         */
        /* JADX WARN: Removed duplicated region for block: B:24:0x0044  */
        /* JADX WARN: Removed duplicated region for block: B:9:0x0028  */
        @Override // kotlinx.coroutines.flow.FlowCollector
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object emit(DownloadState downloadState, Continuation continuation) {
            SoundExtensionsKt$fetchSound$1$1$emit$1 soundExtensionsKt$fetchSound$1$1$emit$1;
            int i5;
            if (continuation instanceof SoundExtensionsKt$fetchSound$1$1$emit$1) {
                soundExtensionsKt$fetchSound$1$1$emit$1 = (SoundExtensionsKt$fetchSound$1$1$emit$1) continuation;
                int i6 = soundExtensionsKt$fetchSound$1$1$emit$1.label;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    soundExtensionsKt$fetchSound$1$1$emit$1.label = i6 - Integer.MIN_VALUE;
                    Object obj = soundExtensionsKt$fetchSound$1$1$emit$1.result;
                    a aVar = a.f13464d;
                    i5 = soundExtensionsKt$fetchSound$1$1$emit$1.label;
                    if (i5 == 0) {
                        if (i5 == 1) {
                            b.R(obj);
                            return Unit.a;
                        }
                        if (i5 == 2) {
                            b.R(obj);
                            return Unit.a;
                        }
                        if (i5 != 3) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        b.R(obj);
                        return Unit.a;
                    }
                    b.R(obj);
                    if (downloadState instanceof DownloadState.Completed) {
                        e eVar = g0.a;
                        or.d dVar = q.a;
                        C00171 c00171 = new C00171(this.$soundManager, this.$key, this.$usage, downloadState, this.$soundResIdPrepared, null);
                        soundExtensionsKt$fetchSound$1$1$emit$1.label = 1;
                    } else {
                        e eVar2 = g0.a;
                        or.d dVar2 = q.a;
                        AnonymousClass3 anonymousClass3 = new AnonymousClass3(null);
                        soundExtensionsKt$fetchSound$1$1$emit$1.label = 3;
                    }
                    return aVar;
                    e eVar3 = g0.a;
                    or.d dVar3 = q.a;
                    AnonymousClass2 anonymousClass2 = new AnonymousClass2(e, null);
                    soundExtensionsKt$fetchSound$1$1$emit$1.label = 2;
                }
            }
            soundExtensionsKt$fetchSound$1$1$emit$1 = new SoundExtensionsKt$fetchSound$1$1$emit$1(this, continuation);
            Object obj2 = soundExtensionsKt$fetchSound$1$1$emit$1.result;
            a aVar2 = a.f13464d;
            i5 = soundExtensionsKt$fetchSound$1$1$emit$1.label;
            if (i5 == 0) {
            }
            e eVar32 = g0.a;
            or.d dVar32 = q.a;
            AnonymousClass2 anonymousClass22 = new AnonymousClass2(e, null);
            soundExtensionsKt$fetchSound$1$1$emit$1.label = 2;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public SoundExtensionsKt$fetchSound$1(Context context, String str, String str2, File file, SoundManager soundManager, int i5, int i6, Function1<? super Integer, Unit> function1, Continuation continuation) {
        super(2, continuation);
        this.$context = context;
        this.$url = str;
        this.$fileName = str2;
        this.$soundDirectory = file;
        this.$soundManager = soundManager;
        this.$key = i5;
        this.$usage = i6;
        this.$soundResIdPrepared = function1;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new SoundExtensionsKt$fetchSound$1(this.$context, this.$url, this.$fileName, this.$soundDirectory, this.$soundManager, this.$key, this.$usage, this.$soundResIdPrepared, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        a aVar = a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            Flow downloadFile$default = FileDownloader.downloadFile$default(FileDownloader.INSTANCE, this.$context, this.$url, this.$fileName, this.$soundDirectory, false, 16, null);
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.$soundManager, this.$key, this.$usage, this.$soundResIdPrepared);
            this.label = 1;
            if (downloadFile$default.collect(anonymousClass1, this) == aVar) {
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
        return ((SoundExtensionsKt$fetchSound$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
