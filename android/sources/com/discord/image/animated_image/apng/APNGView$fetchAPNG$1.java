package com.discord.image.animated_image.apng;

import android.content.Context;
import com.discord.file_downloader.DownloadState;
import com.discord.image.animated_image.animated_image_utils.AnimatedImageStateManager;
import com.discord.image.animated_image.apng.APNGView;
import com.linecorp.apng.ApngDrawable;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;
import nr.g0;
import sr.q;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.image.animated_image.apng.APNGView$fetchAPNG$1", f = "APNGView.kt", l = {87}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class APNGView$fetchAPNG$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ APNGView.Config $config;
    int label;
    final /* synthetic */ APNGView this$0;

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    /* renamed from: com.discord.image.animated_image.apng.APNGView$fetchAPNG$1$1, reason: invalid class name */
    public static final class AnonymousClass1<T> implements FlowCollector {
        final /* synthetic */ APNGView.Config $config;
        final /* synthetic */ APNGView this$0;

        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u0004\u0018\u00010\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
        @d(c = "com.discord.image.animated_image.apng.APNGView$fetchAPNG$1$1$1", f = "APNGView.kt", l = {}, m = "invokeSuspend")
        /* renamed from: com.discord.image.animated_image.apng.APNGView$fetchAPNG$1$1$1, reason: invalid class name and collision with other inner class name */
        public static final class C00151 extends h implements Function2<CoroutineScope, Continuation, Object> {
            final /* synthetic */ APNGView.Config $config;
            final /* synthetic */ ApngDrawable $drawable;
            int label;
            final /* synthetic */ APNGView this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            public C00151(APNGView aPNGView, ApngDrawable apngDrawable, APNGView.Config config, Continuation continuation) {
                super(2, continuation);
                this.this$0 = aPNGView;
                this.$drawable = apngDrawable;
                this.$config = config;
            }

            @Override // lo.a
            public final Continuation create(Object obj, Continuation continuation) {
                return new C00151(this.this$0, this.$drawable, this.$config, continuation);
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
                this.this$0.setImageDrawable(this.$drawable);
                this.this$0.setBackground(null);
                animatedImageStateManager = this.this$0.apngStateManager;
                animatedImageStateManager.onFetchFinished(true, this.$config.getAnimate());
                Function1<String, Unit> onImageLoaded = this.this$0.getOnImageLoaded();
                if (onImageLoaded == null) {
                    return null;
                }
                onImageLoaded.invoke(this.$config.getUrl());
                return Unit.a;
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                return ((C00151) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
            }
        }

        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u000b\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
        @d(c = "com.discord.image.animated_image.apng.APNGView$fetchAPNG$1$1$2", f = "APNGView.kt", l = {}, m = "invokeSuspend")
        /* renamed from: com.discord.image.animated_image.apng.APNGView$fetchAPNG$1$1$2, reason: invalid class name */
        public static final class AnonymousClass2 extends h implements Function2<CoroutineScope, Continuation, Object> {
            int label;
            final /* synthetic */ APNGView this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            public AnonymousClass2(APNGView aPNGView, Continuation continuation) {
                super(2, continuation);
                this.this$0 = aPNGView;
            }

            @Override // lo.a
            public final Continuation create(Object obj, Continuation continuation) {
                return new AnonymousClass2(this.this$0, continuation);
            }

            @Override // lo.a
            public final Object invokeSuspend(Object obj) {
                AnimatedImageStateManager animatedImageStateManager;
                ko.a aVar = ko.a.f13464d;
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                animatedImageStateManager = this.this$0.apngStateManager;
                return Boolean.valueOf(AnimatedImageStateManager.onFetchFinished$default(animatedImageStateManager, false, false, 2, null));
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                return ((AnonymousClass2) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
            }
        }

        @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
        @d(c = "com.discord.image.animated_image.apng.APNGView$fetchAPNG$1$1$3", f = "APNGView.kt", l = {}, m = "invokeSuspend")
        /* renamed from: com.discord.image.animated_image.apng.APNGView$fetchAPNG$1$1$3, reason: invalid class name */
        public static final class AnonymousClass3 extends h implements Function2<CoroutineScope, Continuation, Object> {
            int label;
            final /* synthetic */ APNGView this$0;

            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            public AnonymousClass3(APNGView aPNGView, Continuation continuation) {
                super(2, continuation);
                this.this$0 = aPNGView;
            }

            @Override // lo.a
            public final Continuation create(Object obj, Continuation continuation) {
                return new AnonymousClass3(this.this$0, continuation);
            }

            @Override // lo.a
            public final Object invokeSuspend(Object obj) {
                AnimatedImageStateManager animatedImageStateManager;
                ko.a aVar = ko.a.f13464d;
                if (this.label != 0) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                ki.b.R(obj);
                animatedImageStateManager = this.this$0.apngStateManager;
                AnimatedImageStateManager.onFetchFinished$default(animatedImageStateManager, false, false, 2, null);
                return Unit.a;
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
                return ((AnonymousClass3) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
            }
        }

        public AnonymousClass1(APNGView aPNGView, APNGView.Config config) {
            this.this$0 = aPNGView;
            this.$config = config;
        }

        /* JADX WARN: Can't wrap try/catch for region: R(9:0|1|(2:3|(5:5|6|7|(1:(1:(1:(3:12|13|14)(2:16|17))(3:18|19|20))(4:21|22|19|20))(3:24|(1:26)(4:29|(1:31)|19|20)|28)|33))|35|6|7|(0)(0)|33|(1:(0))) */
        /* JADX WARN: Code restructure failed: missing block: B:27:0x0064, code lost:
        
            if (nr.x.A(r10, r2, r0) == r1) goto L31;
         */
        /* JADX WARN: Code restructure failed: missing block: B:32:0x0090, code lost:
        
            if (nr.x.A(r9, r10, r0) == r1) goto L31;
         */
        /* JADX WARN: Code restructure failed: missing block: B:34:0x0078, code lost:
        
            if (nr.x.A(r9, r10, r0) != r1) goto L34;
         */
        /* JADX WARN: Removed duplicated region for block: B:24:0x003e  */
        /* JADX WARN: Removed duplicated region for block: B:9:0x0024  */
        @Override // kotlinx.coroutines.flow.FlowCollector
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object emit(DownloadState downloadState, Continuation continuation) {
            APNGView$fetchAPNG$1$1$emit$1 aPNGView$fetchAPNG$1$1$emit$1;
            int i5;
            if (continuation instanceof APNGView$fetchAPNG$1$1$emit$1) {
                aPNGView$fetchAPNG$1$1$emit$1 = (APNGView$fetchAPNG$1$1$emit$1) continuation;
                int i6 = aPNGView$fetchAPNG$1$1$emit$1.label;
                if ((i6 & Integer.MIN_VALUE) != 0) {
                    aPNGView$fetchAPNG$1$1$emit$1.label = i6 - Integer.MIN_VALUE;
                    Object obj = aPNGView$fetchAPNG$1$1$emit$1.result;
                    ko.a aVar = ko.a.f13464d;
                    i5 = aPNGView$fetchAPNG$1$1$emit$1.label;
                    if (i5 == 0) {
                        if (i5 == 1) {
                            ki.b.R(obj);
                            return Unit.a;
                        }
                        if (i5 == 2) {
                            ki.b.R(obj);
                            return Unit.a;
                        }
                        if (i5 != 3) {
                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                        }
                        ki.b.R(obj);
                        return Unit.a;
                    }
                    ki.b.R(obj);
                    if (!(downloadState instanceof DownloadState.Completed)) {
                        if (downloadState instanceof DownloadState.Failure) {
                            e eVar = g0.a;
                            or.d dVar = q.a;
                            AnonymousClass3 anonymousClass3 = new AnonymousClass3(this.this$0, null);
                            aPNGView$fetchAPNG$1$1$emit$1.label = 3;
                        }
                        return Unit.a;
                    }
                    int i10 = ApngDrawable.L;
                    ApngDrawable a = ok.b.a(((DownloadState.Completed) downloadState).getFile());
                    e eVar2 = g0.a;
                    or.d dVar2 = q.a;
                    C00151 c00151 = new C00151(this.this$0, a, this.$config, null);
                    aPNGView$fetchAPNG$1$1$emit$1.label = 1;
                    return aVar;
                    e eVar3 = g0.a;
                    or.d dVar3 = q.a;
                    AnonymousClass2 anonymousClass2 = new AnonymousClass2(this.this$0, null);
                    aPNGView$fetchAPNG$1$1$emit$1.label = 2;
                }
            }
            aPNGView$fetchAPNG$1$1$emit$1 = new APNGView$fetchAPNG$1$1$emit$1(this, continuation);
            Object obj2 = aPNGView$fetchAPNG$1$1$emit$1.result;
            ko.a aVar2 = ko.a.f13464d;
            i5 = aPNGView$fetchAPNG$1$1$emit$1.label;
            if (i5 == 0) {
            }
            e eVar32 = g0.a;
            or.d dVar32 = q.a;
            AnonymousClass2 anonymousClass22 = new AnonymousClass2(this.this$0, null);
            aPNGView$fetchAPNG$1$1$emit$1.label = 2;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public APNGView$fetchAPNG$1(APNGView aPNGView, APNGView.Config config, Continuation continuation) {
        super(2, continuation);
        this.this$0 = aPNGView;
        this.$config = config;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new APNGView$fetchAPNG$1(this.this$0, this.$config, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            APNGView.Companion companion = APNGView.INSTANCE;
            Context context = this.this$0.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            Flow downloadFile = companion.downloadFile(context, this.$config.getUrl(), this.$config.getCacheDirectory());
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, this.$config);
            this.label = 1;
            if (downloadFile.collect(anonymousClass1, this) == aVar) {
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
        return ((APNGView$fetchAPNG$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
