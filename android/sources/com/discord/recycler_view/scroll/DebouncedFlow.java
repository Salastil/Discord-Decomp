package com.discord.recycler_view.scroll;

import ki.b;
import kotlin.Function;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.FunctionAdapter;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Job;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import kotlinx.coroutines.flow.MutableSharedFlow;
import lo.d;
import lo.h;
import nr.g0;
import nr.x;
import org.jetbrains.annotations.NotNull;
import qr.y;
import sr.q;
import ur.e;

@Metadata(d1 = {"\u0000:\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\b\u0000\u0018\u0000*\b\b\u0000\u0010\u0001*\u00020\u00022\u00020\u0002B-\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00020\u00070\u0006\u0012\b\b\u0002\u0010\b\u001a\u00020\t¢\u0006\u0004\b\n\u0010\u000bJ\u0015\u0010\u0013\u001a\u00020\u00072\u0006\u0010\u0014\u001a\u00028\u0000H\u0007¢\u0006\u0002\u0010\u0015J\b\u0010\u0016\u001a\u00020\u0007H\u0007R\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000e\u001a\u0004\u0018\u00010\u000fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u0011\u001a\b\u0012\u0004\u0012\u00028\u00000\u0012X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0017"}, d2 = {"Lcom/discord/recycler_view/scroll/DebouncedFlow;", "T", "", "timeoutMillis", "", "onEvent", "Lkotlin/Function1;", "", "collectWithLeadingDebounce", "", "<init>", "(JLkotlin/jvm/functions/Function1;Z)V", "eventCoroutineScope", "Lkotlinx/coroutines/CoroutineScope;", "eventDetectorJob", "Lkotlinx/coroutines/Job;", "eventDetectorActive", "events", "Lkotlinx/coroutines/flow/MutableSharedFlow;", "tryEmit", "event", "(Ljava/lang/Object;)V", "cancel", "recycler_view_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final class DebouncedFlow<T> {

    @NotNull
    private final CoroutineScope eventCoroutineScope;
    private boolean eventDetectorActive;
    private Job eventDetectorJob;

    @NotNull
    private final MutableSharedFlow events;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.recycler_view.scroll.DebouncedFlow$1", f = "DebouncedFlow.kt", l = {28, 31}, m = "invokeSuspend")
    /* renamed from: com.discord.recycler_view.scroll.DebouncedFlow$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ boolean $collectWithLeadingDebounce;
        final /* synthetic */ Function1<T, Unit> $onEvent;
        final /* synthetic */ long $timeoutMillis;
        int label;
        final /* synthetic */ DebouncedFlow<T> this$0;

        @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
        /* renamed from: com.discord.recycler_view.scroll.DebouncedFlow$1$1, reason: invalid class name and collision with other inner class name */
        public /* synthetic */ class C00161 implements FlowCollector, FunctionAdapter {
            final /* synthetic */ Function1<T, Unit> $tmp0;

            /* JADX WARN: Multi-variable type inference failed */
            public C00161(Function1<? super T, Unit> function1) {
                this.$tmp0 = function1;
            }

            @Override // kotlinx.coroutines.flow.FlowCollector
            public final Object emit(T t5, Continuation continuation) {
                Object invokeSuspend$suspendConversion0 = AnonymousClass1.invokeSuspend$suspendConversion0(this.$tmp0, t5, continuation);
                return invokeSuspend$suspendConversion0 == ko.a.f13464d ? invokeSuspend$suspendConversion0 : Unit.a;
            }

            public final boolean equals(Object obj) {
                if ((obj instanceof FlowCollector) && (obj instanceof FunctionAdapter)) {
                    return Intrinsics.areEqual(getFunctionDelegate(), ((FunctionAdapter) obj).getFunctionDelegate());
                }
                return false;
            }

            @Override // kotlin.jvm.internal.FunctionAdapter
            public final Function getFunctionDelegate() {
                return new FunctionReferenceImpl(2, this.$tmp0, Intrinsics.Kotlin.class, "suspendConversion0", "invokeSuspend$suspendConversion0(Lkotlin/jvm/functions/Function1;Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", 0);
            }

            public final int hashCode() {
                return getFunctionDelegate().hashCode();
            }
        }

        @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
        /* renamed from: com.discord.recycler_view.scroll.DebouncedFlow$1$2, reason: invalid class name */
        public /* synthetic */ class AnonymousClass2 implements FlowCollector, FunctionAdapter {
            final /* synthetic */ Function1<T, Unit> $tmp0;

            /* JADX WARN: Multi-variable type inference failed */
            public AnonymousClass2(Function1<? super T, Unit> function1) {
                this.$tmp0 = function1;
            }

            @Override // kotlinx.coroutines.flow.FlowCollector
            public final Object emit(T t5, Continuation continuation) {
                Object invokeSuspend$suspendConversion1 = AnonymousClass1.invokeSuspend$suspendConversion1(this.$tmp0, t5, continuation);
                return invokeSuspend$suspendConversion1 == ko.a.f13464d ? invokeSuspend$suspendConversion1 : Unit.a;
            }

            public final boolean equals(Object obj) {
                if ((obj instanceof FlowCollector) && (obj instanceof FunctionAdapter)) {
                    return Intrinsics.areEqual(getFunctionDelegate(), ((FunctionAdapter) obj).getFunctionDelegate());
                }
                return false;
            }

            @Override // kotlin.jvm.internal.FunctionAdapter
            public final Function getFunctionDelegate() {
                return new FunctionReferenceImpl(2, this.$tmp0, Intrinsics.Kotlin.class, "suspendConversion1", "invokeSuspend$suspendConversion1(Lkotlin/jvm/functions/Function1;Ljava/lang/Object;Lkotlin/coroutines/Continuation;)Ljava/lang/Object;", 0);
            }

            public final int hashCode() {
                return getFunctionDelegate().hashCode();
            }
        }

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        public AnonymousClass1(boolean z5, DebouncedFlow<T> debouncedFlow, long j, Function1<? super T, Unit> function1, Continuation continuation) {
            super(2, continuation);
            this.$collectWithLeadingDebounce = z5;
            this.this$0 = debouncedFlow;
            this.$timeoutMillis = j;
            this.$onEvent = function1;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ Object invokeSuspend$suspendConversion0(Function1 function1, Object obj, Continuation continuation) {
            function1.invoke(obj);
            return Unit.a;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final /* synthetic */ Object invokeSuspend$suspendConversion1(Function1 function1, Object obj, Continuation continuation) {
            function1.invoke(obj);
            return Unit.a;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.$collectWithLeadingDebounce, this.this$0, this.$timeoutMillis, this.$onEvent, continuation);
        }

        /* JADX WARN: Code restructure failed: missing block: B:14:0x0035, code lost:
        
            if (com.discord.misc.utilities.coroutines.CollectWithLeadingDebounceKt.collectWithLeadingDebounce(r7, r1, r5, r6) == r0) goto L17;
         */
        /* JADX WARN: Code restructure failed: missing block: B:15:0x0053, code lost:
        
            return r0;
         */
        /* JADX WARN: Code restructure failed: missing block: B:17:0x0051, code lost:
        
            if (r7.collect(r3, r6) == r0) goto L17;
         */
        @Override // lo.a
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                b.R(obj);
                if (this.$collectWithLeadingDebounce) {
                    MutableSharedFlow mutableSharedFlow = ((DebouncedFlow) this.this$0).events;
                    long j = this.$timeoutMillis;
                    C00161 c00161 = new C00161(this.$onEvent);
                    this.label = 1;
                } else {
                    Flow g6 = y.g(((DebouncedFlow) this.this$0).events, this.$timeoutMillis);
                    AnonymousClass2 anonymousClass2 = new AnonymousClass2(this.$onEvent);
                    this.label = 2;
                }
            } else {
                if (i5 != 1 && i5 != 2) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                b.R(obj);
            }
            return Unit.a;
        }

        @Override // kotlin.jvm.functions.Function2
        public final Object invoke(CoroutineScope coroutineScope, Continuation continuation) {
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    public DebouncedFlow(long j, @NotNull Function1<? super T, Unit> onEvent, boolean z5) {
        Intrinsics.checkNotNullParameter(onEvent, "onEvent");
        e eVar = g0.a;
        sr.d b10 = x.b(q.a);
        this.eventCoroutineScope = b10;
        this.eventDetectorActive = true;
        this.events = y.a(0, 1, pr.a.f16467d);
        this.eventDetectorJob = x.t(b10, null, new AnonymousClass1(z5, this, j, onEvent, null), 3);
    }

    public final void cancel() {
        Job job = this.eventDetectorJob;
        if (job != null) {
            job.f(null);
        }
        this.eventDetectorActive = false;
    }

    public final void tryEmit(@NotNull T event) {
        Intrinsics.checkNotNullParameter(event, "event");
        this.events.d(event);
    }

    public /* synthetic */ DebouncedFlow(long j, Function1 function1, boolean z5, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(j, function1, (i5 & 4) != 0 ? true : z5);
    }
}
