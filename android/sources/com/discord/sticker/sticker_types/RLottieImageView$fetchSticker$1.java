package com.discord.sticker.sticker_types;

import android.content.Context;
import com.discord.file_downloader.DownloadState;
import com.discord.file_downloader.FileDownloader;
import com.discord.image.animated_image.animated_image_utils.AnimatedImageStateManager;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.rlottie.RLottieDrawable;
import com.discord.sticker.sticker_types.RLottieImageView;
import java.io.File;
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
import nr.g0;
import nr.x;
import sr.q;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.sticker.sticker_types.RLottieImageView$fetchSticker$1", f = "RLottieImageView.kt", l = {74, 84}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RLottieImageView$fetchSticker$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ RLottieImageView.Config $config;
    int label;
    final /* synthetic */ RLottieImageView this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.sticker.sticker_types.RLottieImageView$fetchSticker$1$1", f = "RLottieImageView.kt", l = {}, m = "invokeSuspend")
    /* renamed from: com.discord.sticker.sticker_types.RLottieImageView$fetchSticker$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        int label;
        final /* synthetic */ RLottieImageView this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(RLottieImageView rLottieImageView, Continuation continuation) {
            super(2, continuation);
            this.this$0 = rLottieImageView;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.this$0, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            if (this.label != 0) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            ki.b.R(obj);
            this.this$0.clearAnimation();
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RLottieImageView$fetchSticker$1(RLottieImageView rLottieImageView, RLottieImageView.Config config, Continuation continuation) {
        super(2, continuation);
        this.this$0 = rLottieImageView;
        this.$config = config;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new RLottieImageView$fetchSticker$1(this.this$0, this.$config, continuation);
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x007c, code lost:
    
        if (r12.collect(r1, r11) == r0) goto L15;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:0x007e, code lost:
    
        return r0;
     */
    /* JADX WARN: Code restructure failed: missing block: B:16:0x0031, code lost:
    
        if (nr.x.A(r12, r1, r11) == r0) goto L15;
     */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            e eVar = g0.a;
            or.d dVar = q.a;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, null);
            this.label = 1;
        } else {
            if (i5 != 1) {
                if (i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                return Unit.a;
            }
            ki.b.R(obj);
        }
        FileDownloader fileDownloader = FileDownloader.INSTANCE;
        Context context = this.this$0.getContext();
        Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
        Flow downloadFile$default = FileDownloader.downloadFile$default(fileDownloader, context, this.$config.getUrl(), k0.d.k(this.$config.getAsset(), ".json"), new File(this.this$0.getContext().getCacheDir(), "stickers"), false, 16, null);
        final RLottieImageView rLottieImageView = this.this$0;
        final RLottieImageView.Config config = this.$config;
        FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.sticker.sticker_types.RLottieImageView$fetchSticker$1.2

            @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
            @d(c = "com.discord.sticker.sticker_types.RLottieImageView$fetchSticker$1$2$1", f = "RLottieImageView.kt", l = {}, m = "invokeSuspend")
            /* renamed from: com.discord.sticker.sticker_types.RLottieImageView$fetchSticker$1$2$1, reason: invalid class name */
            public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
                final /* synthetic */ RLottieImageView.Config $config;
                final /* synthetic */ DownloadState $downloadState;
                int label;
                final /* synthetic */ RLottieImageView this$0;

                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                public AnonymousClass1(RLottieImageView rLottieImageView, DownloadState downloadState, RLottieImageView.Config config, Continuation continuation) {
                    super(2, continuation);
                    this.this$0 = rLottieImageView;
                    this.$downloadState = downloadState;
                    this.$config = config;
                }

                @Override // lo.a
                public final Continuation create(Object obj, Continuation continuation) {
                    return new AnonymousClass1(this.this$0, this.$downloadState, this.$config, continuation);
                }

                @Override // lo.a
                public final Object invokeSuspend(Object obj) {
                    AnimatedImageStateManager animatedImageStateManager;
                    ko.a aVar = ko.a.f13464d;
                    if (this.label != 0) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    this.this$0.setImageDrawable(null);
                    RLottieImageView rLottieImageView = this.this$0;
                    Context context = rLottieImageView.getContext();
                    Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
                    File file = ((DownloadState.Completed) this.$downloadState).getFile();
                    int dpToPx = SizeUtilsKt.getDpToPx(this.$config.getWidthDp());
                    int dpToPx2 = SizeUtilsKt.getDpToPx(this.$config.getHeightDp());
                    int renderMode = this.$config.getRenderMode();
                    rLottieImageView.setAnimation(context, file, dpToPx, dpToPx2, renderMode != 0 ? renderMode != 1 ? RLottieDrawable.PlaybackMode.ONCE : RLottieDrawable.PlaybackMode.FREEZE : RLottieDrawable.PlaybackMode.LOOP);
                    this.this$0.setBackground(null);
                    animatedImageStateManager = this.this$0.rLottieStateManager;
                    animatedImageStateManager.onFetchFinished(true, this.$config.getAnimate());
                    return Unit.a;
                }

                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                    return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
                }
            }

            @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
            @d(c = "com.discord.sticker.sticker_types.RLottieImageView$fetchSticker$1$2$2", f = "RLottieImageView.kt", l = {}, m = "invokeSuspend")
            /* renamed from: com.discord.sticker.sticker_types.RLottieImageView$fetchSticker$1$2$2, reason: invalid class name and collision with other inner class name */
            public static final class C00182 extends h implements Function2<CoroutineScope, Continuation, Object> {
                int label;
                final /* synthetic */ RLottieImageView this$0;

                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                public C00182(RLottieImageView rLottieImageView, Continuation continuation) {
                    super(2, continuation);
                    this.this$0 = rLottieImageView;
                }

                @Override // lo.a
                public final Continuation create(Object obj, Continuation continuation) {
                    return new C00182(this.this$0, continuation);
                }

                @Override // lo.a
                public final Object invokeSuspend(Object obj) {
                    AnimatedImageStateManager animatedImageStateManager;
                    ko.a aVar = ko.a.f13464d;
                    if (this.label != 0) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    ki.b.R(obj);
                    animatedImageStateManager = this.this$0.rLottieStateManager;
                    AnimatedImageStateManager.onFetchFinished$default(animatedImageStateManager, false, false, 2, null);
                    return Unit.a;
                }

                @Override // kotlin.jvm.functions.Function2
                public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                    return ((C00182) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
                }
            }

            @Override // kotlinx.coroutines.flow.FlowCollector
            public final Object emit(DownloadState downloadState, Continuation continuation) {
                if (downloadState instanceof DownloadState.Completed) {
                    e eVar2 = g0.a;
                    Object A = x.A(q.a, new AnonymousClass1(RLottieImageView.this, downloadState, config, null), continuation);
                    return A == ko.a.f13464d ? A : Unit.a;
                }
                if (!(downloadState instanceof DownloadState.Failure)) {
                    return Unit.a;
                }
                e eVar3 = g0.a;
                Object A2 = x.A(q.a, new C00182(RLottieImageView.this, null), continuation);
                return A2 == ko.a.f13464d ? A2 : Unit.a;
            }
        };
        this.label = 2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
        return ((RLottieImageView$fetchSticker$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
