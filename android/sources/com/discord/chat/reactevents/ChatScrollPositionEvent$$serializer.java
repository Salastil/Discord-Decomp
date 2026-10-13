package com.discord.chat.reactevents;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.x;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/reactevents/ChatScrollPositionEvent.$serializer", "Lbs/h0;", "Lcom/discord/chat/reactevents/ChatScrollPositionEvent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/reactevents/ChatScrollPositionEvent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/reactevents/ChatScrollPositionEvent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ChatScrollPositionEvent$$serializer implements h0 {

    @NotNull
    public static final ChatScrollPositionEvent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ChatScrollPositionEvent$$serializer chatScrollPositionEvent$$serializer = new ChatScrollPositionEvent$$serializer();
        INSTANCE = chatScrollPositionEvent$$serializer;
        j1 j1Var = new j1("com.discord.chat.reactevents.ChatScrollPositionEvent", chatScrollPositionEvent$$serializer, 12);
        j1Var.k("isAtBottom", false);
        j1Var.k("isNearBottom", false);
        j1Var.k("isNearTop", false);
        j1Var.k("dragging", false);
        j1Var.k("decelerating", false);
        j1Var.k("shouldShowJumpToPresent", false);
        j1Var.k("isFirstMessageVisible", false);
        j1Var.k("firstVisibleMessageIndex", false);
        j1Var.k("firstVisibleMessagePercentVisible", false);
        j1Var.k("lastVisibleMessageIndex", false);
        j1Var.k("lastVisibleMessagePercentVisible", false);
        j1Var.k("changesetUpdateId", false);
        descriptor = j1Var;
    }

    private ChatScrollPositionEvent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        x xVar = x.a;
        KSerializer o6 = e.o(xVar);
        KSerializer o7 = e.o(xVar);
        g gVar = g.a;
        o0 o0Var = o0.a;
        return new KSerializer[]{gVar, gVar, gVar, gVar, gVar, gVar, gVar, o0Var, o6, o0Var, o7, o0Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ChatScrollPositionEvent deserialize(@NotNull Decoder decoder) {
        boolean z5;
        Double d6;
        Double d7;
        int i5;
        int i6;
        int i10;
        boolean z6;
        boolean z7;
        boolean z8;
        boolean z10;
        boolean z11;
        boolean z12;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i11 = 11;
        int i12 = 0;
        if (beginStructure.decodeSequentially()) {
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 0);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 1);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 2);
            boolean decodeBooleanElement3 = beginStructure.decodeBooleanElement(serialDescriptor, 3);
            boolean decodeBooleanElement4 = beginStructure.decodeBooleanElement(serialDescriptor, 4);
            boolean decodeBooleanElement5 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
            boolean decodeBooleanElement6 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 7);
            x xVar = x.a;
            Double d8 = (Double) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, xVar, null);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 9);
            Double d10 = (Double) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, xVar, null);
            i12 = 4095;
            i5 = beginStructure.decodeIntElement(serialDescriptor, 11);
            d6 = d10;
            i6 = decodeIntElement2;
            i10 = decodeIntElement;
            z6 = decodeBooleanElement6;
            z7 = decodeBooleanElement5;
            z8 = decodeBooleanElement3;
            d7 = d8;
            z10 = decodeBooleanElement4;
            z11 = decodeBooleanElement2;
            z12 = decodeBooleanElement;
        } else {
            boolean z13 = true;
            z5 = false;
            int i13 = 0;
            int i14 = 0;
            boolean z14 = false;
            boolean z15 = false;
            boolean z16 = false;
            boolean z17 = false;
            boolean z18 = false;
            boolean z19 = false;
            Double d11 = null;
            Double d12 = null;
            int i15 = 0;
            while (z13) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z13 = false;
                        i11 = 11;
                    case 0:
                        i12 |= 1;
                        z5 = beginStructure.decodeBooleanElement(serialDescriptor, 0);
                        i11 = 11;
                    case 1:
                        z19 = beginStructure.decodeBooleanElement(serialDescriptor, 1);
                        i12 |= 2;
                        i11 = 11;
                    case 2:
                        z18 = beginStructure.decodeBooleanElement(serialDescriptor, 2);
                        i12 |= 4;
                        i11 = 11;
                    case 3:
                        z16 = beginStructure.decodeBooleanElement(serialDescriptor, 3);
                        i12 |= 8;
                    case 4:
                        z17 = beginStructure.decodeBooleanElement(serialDescriptor, 4);
                        i12 |= 16;
                    case 5:
                        z15 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
                        i12 |= 32;
                    case 6:
                        z14 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
                        i12 |= 64;
                    case 7:
                        i14 = beginStructure.decodeIntElement(serialDescriptor, 7);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        d12 = (Double) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, x.a, d12);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        i13 = beginStructure.decodeIntElement(serialDescriptor, 9);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    case 10:
                        d11 = (Double) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, x.a, d11);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    case 11:
                        i15 = beginStructure.decodeIntElement(serialDescriptor, i11);
                        i12 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            d6 = d11;
            d7 = d12;
            i5 = i15;
            i6 = i13;
            i10 = i14;
            z6 = z14;
            z7 = z15;
            z8 = z16;
            z10 = z17;
            z11 = z18;
            z12 = z19;
        }
        boolean z20 = z5;
        int i16 = i12;
        beginStructure.endStructure(serialDescriptor);
        return new ChatScrollPositionEvent(i16, z20, z12, z11, z8, z10, z7, z6, i10, d7, i6, d6, i5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ChatScrollPositionEvent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ChatScrollPositionEvent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
