package app.rive;

import android.os.Trace;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.k0;
import app.rive.Fit;
import app.rive.core.ArtboardHandle;
import app.rive.core.CommandQueue;
import app.rive.core.FrameTickerKt;
import app.rive.core.RiveSurface;
import app.rive.core.StateMachineHandle;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import ki.b;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Ref;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.time.Duration;
import kotlinx.coroutines.CoroutineScope;
import lo.d;
import lo.h;
import lr.c;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
@d(c = "app.rive.RiveView$onAttachedToWindow$1", f = "RiveView.kt", l = {ChatViewRecyclerTypes.SHARED_CUSTOM_THEME_EMBED}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class RiveView$onAttachedToWindow$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ LifecycleOwner $owner;
    int label;
    final /* synthetic */ RiveView this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {1, 9, 0}, xi = 48)
    @d(c = "app.rive.RiveView$onAttachedToWindow$1$1", f = "RiveView.kt", l = {ChatViewRecyclerTypes.GIFT_INTENT}, m = "invokeSuspend")
    @SourceDebugExtension({"SMAP\nRiveView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RiveView.kt\napp/rive/RiveView$onAttachedToWindow$1$1\n+ 2 Tracing.kt\napp/rive/core/TracingKt\n*L\n1#1,165:1\n12#2,3:166\n12#2,6:169\n12#2,6:175\n16#2,2:181\n*S KotlinDebug\n*F\n+ 1 RiveView.kt\napp/rive/RiveView$onAttachedToWindow$1$1\n*L\n67#1:166,3\n86#1:169,6\n90#1:175,6\n67#1:181,2\n*E\n"})
    /* renamed from: app.rive.RiveView$onAttachedToWindow$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        private /* synthetic */ Object L$0;
        Object L$1;
        Object L$2;
        int label;
        final /* synthetic */ RiveView this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(RiveView riveView, Continuation continuation) {
            super(2, continuation);
            this.this$0 = riveView;
        }

        @Override // lo.a
        @NotNull
        public final Continuation create(Object obj, @NotNull Continuation continuation) {
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, continuation);
            anonymousClass1.L$0 = obj;
            return anonymousClass1;
        }

        /* JADX WARN: Code restructure failed: missing block: B:12:0x00d0, code lost:
        
            if (r2.element == false) goto L9;
         */
        /* JADX WARN: Removed duplicated region for block: B:21:0x0072 A[Catch: all -> 0x0070, TryCatch #0 {all -> 0x0070, blocks: (B:7:0x0067, B:9:0x006d, B:10:0x00c9, B:21:0x0072, B:23:0x0078, B:25:0x0082, B:27:0x008c, B:28:0x008f, B:31:0x009d, B:34:0x00b6, B:37:0x00bb, B:38:0x00be, B:41:0x00c0, B:42:0x00c3, B:43:0x00c4, B:44:0x00c7, B:33:0x00a5, B:30:0x0098), top: B:6:0x0067, inners: #1, #2 }] */
        /* JADX WARN: Removed duplicated region for block: B:9:0x006d A[Catch: all -> 0x0070, TryCatch #0 {all -> 0x0070, blocks: (B:7:0x0067, B:9:0x006d, B:10:0x00c9, B:21:0x0072, B:23:0x0078, B:25:0x0082, B:27:0x008c, B:28:0x008f, B:31:0x009d, B:34:0x00b6, B:37:0x00bb, B:38:0x00be, B:41:0x00c0, B:42:0x00c3, B:43:0x00c4, B:44:0x00c7, B:33:0x00a5, B:30:0x0098), top: B:6:0x0067, inners: #1, #2 }] */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:16:0x0059 -> B:5:0x005c). Please report as a decompilation issue!!! */
        @Override // lo.a
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object invokeSuspend(@NotNull Object obj) {
            final Ref.LongRef longRef;
            CoroutineScope coroutineScope;
            Ref.BooleanRef booleanRef;
            Object withFrameNanosChoreographer;
            RiveView riveView;
            RiveFile riveFile;
            ArtboardHandle artboardHandle;
            StateMachineHandle stateMachineHandle;
            RiveSurface riveSurface;
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                b.R(obj);
                CoroutineScope coroutineScope2 = (CoroutineScope) this.L$0;
                longRef = new Ref.LongRef();
                lr.a aVar2 = Duration.f13595e;
                longRef.element = c.g(0, lr.d.f14210e);
                coroutineScope = coroutineScope2;
                if (x.s(coroutineScope)) {
                    booleanRef = new Ref.BooleanRef();
                    Function1<Long, Duration> function1 = new Function1<Long, Duration>() { // from class: app.rive.RiveView$onAttachedToWindow$1$1$deltaTime$1
                        {
                            super(1);
                        }

                        @Override // kotlin.jvm.functions.Function1
                        public /* synthetic */ Object invoke(Object obj2) {
                            return new Duration(m50invoke5sfh64U(((Number) obj2).longValue()));
                        }

                        /* renamed from: invoke-5sfh64U, reason: not valid java name */
                        public final long m50invoke5sfh64U(long j) {
                            lr.a aVar3 = Duration.f13595e;
                            lr.d dVar = lr.d.f14210e;
                            long h6 = c.h(j, dVar);
                            long g6 = Ref.LongRef.this.element == c.g(0, dVar) ? c.g(0, dVar) : Duration.i(h6, Duration.m(Ref.LongRef.this.element));
                            Ref.LongRef.this.element = h6;
                            return g6;
                        }
                    };
                    this.L$0 = coroutineScope;
                    this.L$1 = longRef;
                    this.L$2 = booleanRef;
                    this.label = 1;
                    withFrameNanosChoreographer = FrameTickerKt.withFrameNanosChoreographer(function1, this);
                    if (withFrameNanosChoreographer == aVar) {
                        return aVar;
                    }
                    long j = ((Duration) withFrameNanosChoreographer).f13598d;
                    riveView = this.this$0;
                    Trace.beginSection("Rive/Frame");
                    riveFile = riveView.riveFile;
                    if (riveFile != null) {
                    }
                    Unit unit = Unit.a;
                    Trace.endSection();
                }
                return Unit.a;
            }
            if (i5 != 1) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            booleanRef = (Ref.BooleanRef) this.L$2;
            longRef = (Ref.LongRef) this.L$1;
            coroutineScope = (CoroutineScope) this.L$0;
            b.R(obj);
            withFrameNanosChoreographer = obj;
            long j5 = ((Duration) withFrameNanosChoreographer).f13598d;
            riveView = this.this$0;
            Trace.beginSection("Rive/Frame");
            try {
                riveFile = riveView.riveFile;
                if (riveFile != null) {
                    artboardHandle = riveView.artboardHandle;
                    if (artboardHandle != null) {
                        long m110unboximpl = artboardHandle.m110unboximpl();
                        stateMachineHandle = riveView.stateMachineHandle;
                        if (stateMachineHandle != null) {
                            long m226unboximpl = stateMachineHandle.m226unboximpl();
                            riveSurface = riveView.riveSurface;
                            if (riveSurface == null) {
                                booleanRef.element = true;
                            } else {
                                CommandQueue riveWorker = riveFile.getRiveWorker();
                                Trace.beginSection("Rive/Frame/Advance");
                                try {
                                    try {
                                        riveWorker.m123advanceStateMachineDDXDRQI(m226unboximpl, j5);
                                        Unit unit2 = Unit.a;
                                        riveWorker.m142drawOcc3x_Y(m110unboximpl, m226unboximpl, riveSurface, new Fit.Contain(null, 1, null), (r17 & 16) != 0 ? 0 : 0);
                                        Trace.endSection();
                                    } finally {
                                    }
                                    Trace.endSection();
                                    Trace.beginSection("Rive/Frame/Draw");
                                } finally {
                                }
                            }
                        } else {
                            booleanRef.element = true;
                        }
                    } else {
                        booleanRef.element = true;
                    }
                } else {
                    booleanRef.element = true;
                }
                Unit unit3 = Unit.a;
                Trace.endSection();
            } catch (Throwable th2) {
                throw th2;
            }
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveView$onAttachedToWindow$1(LifecycleOwner lifecycleOwner, RiveView riveView, Continuation continuation) {
        super(2, continuation);
        this.$owner = lifecycleOwner;
        this.this$0 = riveView;
    }

    @Override // lo.a
    @NotNull
    public final Continuation create(Object obj, @NotNull Continuation continuation) {
        return new RiveView$onAttachedToWindow$1(this.$owner, this.this$0, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(@NotNull Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            b.R(obj);
            Lifecycle lifecycle = this.$owner.getLifecycle();
            Lifecycle.State state = Lifecycle.State.f2141w;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.this$0, null);
            this.label = 1;
            if (k0.a(lifecycle, state, anonymousClass1, this) == aVar) {
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
    public final Object invoke(@NotNull CoroutineScope coroutineScope, Continuation continuation) {
        return ((RiveView$onAttachedToWindow$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
