package com.discord.chat.presentation.message.system;

import android.widget.TextView;
import androidx.lifecycle.Lifecycle;
import com.discord.chat.bridge.Message;
import com.discord.chat.databinding.CallSystemMessageViewBinding;
import com.discord.misc.utilities.coroutines.CoroutineViewUtilsKt;
import com.discord.misc.utilities.time.IntervalFlowKt;
import java.util.Arrays;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.g;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.time.Duration;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;
import lo.d;
import lo.h;
import lr.c;
import nr.g0;
import nr.t;
import rr.s;
import ur.e;

@Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
@d(c = "com.discord.chat.presentation.message.system.CallSystemMessageView$setMessage$1", f = "CallSystemMessageView.kt", l = {109}, m = "invokeSuspend")
/* loaded from: classes.dex */
public final class CallSystemMessageView$setMessage$1 extends h implements Function2<CoroutineScope, Continuation, Object> {
    final /* synthetic */ Long $callStartMs;
    final /* synthetic */ Message $message;
    int label;
    final /* synthetic */ CallSystemMessageView this$0;

    @Metadata(d1 = {"\u0000\n\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\n"}, d2 = {"<anonymous>", "", "Lkotlinx/coroutines/CoroutineScope;"}, k = 3, mv = {2, 1, 0}, xi = 48)
    @d(c = "com.discord.chat.presentation.message.system.CallSystemMessageView$setMessage$1$1", f = "CallSystemMessageView.kt", l = {116}, m = "invokeSuspend")
    @SourceDebugExtension({"SMAP\nCallSystemMessageView.kt\nKotlin\n*S Kotlin\n*F\n+ 1 CallSystemMessageView.kt\ncom/discord/chat/presentation/message/system/CallSystemMessageView$setMessage$1$1\n+ 2 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 3 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt\n+ 4 SafeCollector.common.kt\nkotlinx/coroutines/flow/internal/SafeCollector_commonKt\n*L\n1#1,171:1\n49#2:172\n51#2:176\n46#3:173\n51#3:175\n105#4:174\n*S KotlinDebug\n*F\n+ 1 CallSystemMessageView.kt\ncom/discord/chat/presentation/message/system/CallSystemMessageView$setMessage$1$1\n*L\n111#1:172\n111#1:176\n111#1:173\n111#1:175\n111#1:174\n*E\n"})
    /* renamed from: com.discord.chat.presentation.message.system.CallSystemMessageView$setMessage$1$1, reason: invalid class name */
    public static final class AnonymousClass1 extends h implements Function2<CoroutineScope, Continuation, Object> {
        final /* synthetic */ Long $callStartMs;
        final /* synthetic */ Message $message;
        int label;
        final /* synthetic */ CallSystemMessageView this$0;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AnonymousClass1(Long l6, CallSystemMessageView callSystemMessageView, Message message, Continuation continuation) {
            super(2, continuation);
            this.$callStartMs = l6;
            this.this$0 = callSystemMessageView;
            this.$message = message;
        }

        @Override // lo.a
        public final Continuation create(Object obj, Continuation continuation) {
            return new AnonymousClass1(this.$callStartMs, this.this$0, this.$message, continuation);
        }

        @Override // lo.a
        public final Object invokeSuspend(Object obj) {
            ko.a aVar = ko.a.f13464d;
            int i5 = this.label;
            if (i5 == 0) {
                ki.b.R(obj);
                lr.a aVar2 = Duration.f13595e;
                long g6 = c.g(1, lr.d.f14212v);
                Duration.f13595e.getClass();
                final Flow m1057intervalFlowQTBD994 = IntervalFlowKt.m1057intervalFlowQTBD994(g6, 0L);
                final Long l6 = this.$callStartMs;
                Flow flow = new Flow() { // from class: com.discord.chat.presentation.message.system.CallSystemMessageView$setMessage$1$1$invokeSuspend$$inlined$map$1

                    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
                    @SourceDebugExtension({"SMAP\nEmitters.kt\nKotlin\n*S Kotlin\n*F\n+ 1 Emitters.kt\nkotlinx/coroutines/flow/FlowKt__EmittersKt$unsafeTransform$1$1\n+ 2 Transform.kt\nkotlinx/coroutines/flow/FlowKt__TransformKt\n+ 3 CallSystemMessageView.kt\ncom/discord/chat/presentation/message/system/CallSystemMessageView$setMessage$1$1\n*L\n1#1,49:1\n50#2:50\n112#3,3:51\n*E\n"})
                    /* renamed from: com.discord.chat.presentation.message.system.CallSystemMessageView$setMessage$1$1$invokeSuspend$$inlined$map$1$2, reason: invalid class name */
                    public static final class AnonymousClass2<T> implements FlowCollector {
                        final /* synthetic */ Long $callStartMs$inlined;
                        final /* synthetic */ FlowCollector $this_unsafeFlow;

                        @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
                        @d(c = "com.discord.chat.presentation.message.system.CallSystemMessageView$setMessage$1$1$invokeSuspend$$inlined$map$1$2", f = "CallSystemMessageView.kt", l = {50}, m = "emit")
                        /* renamed from: com.discord.chat.presentation.message.system.CallSystemMessageView$setMessage$1$1$invokeSuspend$$inlined$map$1$2$1, reason: invalid class name */
                        public static final class AnonymousClass1 extends lo.c {
                            Object L$0;
                            int label;
                            /* synthetic */ Object result;

                            public AnonymousClass1(Continuation continuation) {
                                super(continuation);
                            }

                            @Override // lo.a
                            public final Object invokeSuspend(Object obj) {
                                this.result = obj;
                                this.label |= Integer.MIN_VALUE;
                                return AnonymousClass2.this.emit(null, this);
                            }
                        }

                        public AnonymousClass2(FlowCollector flowCollector, Long l6) {
                            this.$this_unsafeFlow = flowCollector;
                            this.$callStartMs$inlined = l6;
                        }

                        /* JADX WARN: Removed duplicated region for block: B:15:0x002f  */
                        /* JADX WARN: Removed duplicated region for block: B:8:0x0021  */
                        @Override // kotlinx.coroutines.flow.FlowCollector
                        /*
                            Code decompiled incorrectly, please refer to instructions dump.
                        */
                        public final Object emit(Object obj, Continuation continuation) {
                            AnonymousClass1 anonymousClass1;
                            int i5;
                            if (continuation instanceof AnonymousClass1) {
                                anonymousClass1 = (AnonymousClass1) continuation;
                                int i6 = anonymousClass1.label;
                                if ((i6 & Integer.MIN_VALUE) != 0) {
                                    anonymousClass1.label = i6 - Integer.MIN_VALUE;
                                    Object obj2 = anonymousClass1.result;
                                    ko.a aVar = ko.a.f13464d;
                                    i5 = anonymousClass1.label;
                                    if (i5 != 0) {
                                        ki.b.R(obj2);
                                        FlowCollector flowCollector = this.$this_unsafeFlow;
                                        lr.a aVar2 = Duration.f13595e;
                                        Duration duration = new Duration(c.h(System.currentTimeMillis() - this.$callStartMs$inlined.longValue(), lr.d.f14211i));
                                        Duration.f13595e.getClass();
                                        Duration minimumValue = new Duration(0L);
                                        Intrinsics.checkNotNullParameter(duration, "<this>");
                                        Intrinsics.checkNotNullParameter(minimumValue, "minimumValue");
                                        if (duration.compareTo(minimumValue) < 0) {
                                            duration = minimumValue;
                                        }
                                        anonymousClass1.label = 1;
                                        if (flowCollector.emit(duration, anonymousClass1) == aVar) {
                                            return aVar;
                                        }
                                    } else {
                                        if (i5 != 1) {
                                            throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                                        }
                                        ki.b.R(obj2);
                                    }
                                    return Unit.a;
                                }
                            }
                            anonymousClass1 = new AnonymousClass1(continuation);
                            Object obj22 = anonymousClass1.result;
                            ko.a aVar3 = ko.a.f13464d;
                            i5 = anonymousClass1.label;
                            if (i5 != 0) {
                            }
                            return Unit.a;
                        }
                    }

                    @Override // kotlinx.coroutines.flow.Flow
                    public Object collect(FlowCollector flowCollector, Continuation continuation) {
                        Object collect = Flow.this.collect(new AnonymousClass2(flowCollector, l6), continuation);
                        return collect == ko.a.f13464d ? collect : Unit.a;
                    }
                };
                e eVar = g0.a;
                if (eVar.o(t.f15661e) != null) {
                    throw new IllegalArgumentException(("Flow context cannot contain job in it. Had " + eVar).toString());
                }
                if (!Intrinsics.areEqual(eVar, g.f13538d)) {
                    flow = flow instanceof s ? rr.c.a((s) flow, eVar, 0, null, 6) : new rr.g(flow, eVar, 0, null, 12);
                }
                final CallSystemMessageView callSystemMessageView = this.this$0;
                final Message message = this.$message;
                FlowCollector flowCollector = new FlowCollector() { // from class: com.discord.chat.presentation.message.system.CallSystemMessageView.setMessage.1.1.2
                    @Override // kotlinx.coroutines.flow.FlowCollector
                    public /* synthetic */ Object emit(Object obj2, Continuation continuation) {
                        return m738emitVtjQ1oo(((Duration) obj2).f13598d, continuation);
                    }

                    /* renamed from: emit-VtjQ1oo, reason: not valid java name */
                    public final Object m738emitVtjQ1oo(long j, Continuation continuation) {
                        CallSystemMessageViewBinding callSystemMessageViewBinding;
                        CallSystemMessageView callSystemMessageView2 = CallSystemMessageView.this;
                        Message message2 = message;
                        lr.a aVar3 = Duration.f13595e;
                        long k = Duration.k(j, lr.d.f14214x);
                        int e9 = Duration.e(j);
                        int g10 = Duration.g(j);
                        Duration.f(j);
                        callSystemMessageViewBinding = callSystemMessageView2.binding;
                        TextView textView = callSystemMessageViewBinding.info;
                        Long l7 = new Long(k);
                        Integer num = new Integer(e9);
                        Integer num2 = new Integer(g10);
                        String description = message2.getDescription();
                        if (description == null) {
                            description = "";
                        }
                        String format = String.format("%02d:%02d:%02d%s", Arrays.copyOf(new Object[]{l7, num, num2, description}, 4));
                        Intrinsics.checkNotNullExpressionValue(format, "format(...)");
                        textView.setText(format);
                        return Unit.a;
                    }
                };
                this.label = 1;
                if (flow.collect(flowCollector, this) == aVar) {
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
            return ((AnonymousClass1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public CallSystemMessageView$setMessage$1(CallSystemMessageView callSystemMessageView, Long l6, Message message, Continuation continuation) {
        super(2, continuation);
        this.this$0 = callSystemMessageView;
        this.$callStartMs = l6;
        this.$message = message;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        return new CallSystemMessageView$setMessage$1(this.this$0, this.$callStartMs, this.$message, continuation);
    }

    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        ko.a aVar = ko.a.f13464d;
        int i5 = this.label;
        if (i5 == 0) {
            ki.b.R(obj);
            CallSystemMessageView callSystemMessageView = this.this$0;
            Lifecycle.State state = Lifecycle.State.f2140v;
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(this.$callStartMs, callSystemMessageView, this.$message, null);
            this.label = 1;
            if (CoroutineViewUtilsKt.repeatOnLifecycleOwner(callSystemMessageView, state, anonymousClass1, this) == aVar) {
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
        return ((CallSystemMessageView$setMessage$1) create(coroutineScope, continuation)).invokeSuspend(Unit.a);
    }
}
