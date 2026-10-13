package com.discord.chat.input.bridge;

import bs.g;
import bs.g0;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/input/bridge/ChatInputNode.$serializer", "Lbs/h0;", "Lcom/discord/chat/input/bridge/ChatInputNode;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/input/bridge/ChatInputNode;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/input/bridge/ChatInputNode;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ChatInputNode$$serializer implements h0 {

    @NotNull
    public static final ChatInputNode$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ChatInputNode$$serializer chatInputNode$$serializer = new ChatInputNode$$serializer();
        INSTANCE = chatInputNode$$serializer;
        j1 j1Var = new j1("com.discord.chat.input.bridge.ChatInputNode", chatInputNode$$serializer, 11);
        j1Var.k("type", false);
        j1Var.k("location", false);
        j1Var.k("length", false);
        j1Var.k("style", true);
        j1Var.k("deleteNodeOnBackspace", true);
        j1Var.k("tapAction", true);
        j1Var.k("editDisabled", true);
        j1Var.k("icon", true);
        j1Var.k("iconSize", true);
        j1Var.k("iconCornerRadius", true);
        j1Var.k("iconSpacing", true);
        descriptor = j1Var;
    }

    private ChatInputNode$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        KSerializer o6 = e.o(ChatInputNodeStyle$$serializer.INSTANCE);
        KSerializer o7 = e.o(TapAction$$serializer.INSTANCE);
        KSerializer o10 = e.o(v1.a);
        g0 g0Var = g0.a;
        KSerializer o11 = e.o(g0Var);
        KSerializer o12 = e.o(g0Var);
        KSerializer o13 = e.o(g0Var);
        o0 o0Var = o0.a;
        g gVar = g.a;
        return new KSerializer[]{o0Var, o0Var, o0Var, o6, gVar, o7, gVar, o10, o11, o12, o13};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ChatInputNode deserialize(@NotNull Decoder decoder) {
        int i5;
        Float f2;
        Float f10;
        String str;
        Float f11;
        TapAction tapAction;
        ChatInputNodeStyle chatInputNodeStyle;
        boolean z5;
        boolean z6;
        int i6;
        int i10;
        char c6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i11 = 10;
        int i12 = 9;
        int i13 = 0;
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 2);
            ChatInputNodeStyle chatInputNodeStyle2 = (ChatInputNodeStyle) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, ChatInputNodeStyle$$serializer.INSTANCE, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 4);
            TapAction tapAction2 = (TapAction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, TapAction$$serializer.INSTANCE, null);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            String str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, null);
            g0 g0Var = g0.a;
            Float f12 = (Float) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, g0Var, null);
            Float f13 = (Float) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, g0Var, null);
            Float f14 = (Float) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, g0Var, null);
            i13 = 2047;
            f2 = f14;
            f10 = f13;
            str = str2;
            z5 = decodeBooleanElement2;
            tapAction = tapAction2;
            chatInputNodeStyle = chatInputNodeStyle2;
            f11 = f12;
            z6 = decodeBooleanElement;
            i6 = decodeIntElement2;
            i10 = decodeIntElement;
        } else {
            boolean z7 = true;
            i5 = 0;
            boolean z8 = false;
            int i14 = 0;
            int i15 = 0;
            Float f15 = null;
            Float f16 = null;
            String str3 = null;
            Float f17 = null;
            TapAction tapAction3 = null;
            ChatInputNodeStyle chatInputNodeStyle3 = null;
            boolean z10 = false;
            while (z7) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z7 = false;
                        i11 = 10;
                    case 0:
                        i13 |= 1;
                        i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i11 = 10;
                        i12 = 9;
                    case 1:
                        i15 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i13 |= 2;
                        i11 = 10;
                        i12 = 9;
                    case 2:
                        i14 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i13 |= 4;
                        i11 = 10;
                        i12 = 9;
                    case 3:
                        chatInputNodeStyle3 = (ChatInputNodeStyle) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, ChatInputNodeStyle$$serializer.INSTANCE, chatInputNodeStyle3);
                        i13 |= 8;
                        i11 = 10;
                        i12 = 9;
                    case 4:
                        z8 = beginStructure.decodeBooleanElement(serialDescriptor, 4);
                        i13 |= 16;
                        i11 = 10;
                        i12 = 9;
                    case 5:
                        tapAction3 = (TapAction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, TapAction$$serializer.INSTANCE, tapAction3);
                        i13 |= 32;
                        i11 = 10;
                        i12 = 9;
                    case 6:
                        c6 = 7;
                        z10 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
                        i13 |= 64;
                        i11 = 10;
                    case 7:
                        c6 = 7;
                        str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, str3);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i11 = 10;
                    case 8:
                        f17 = (Float) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, g0.a, f17);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        f16 = (Float) beginStructure.decodeNullableSerializableElement(serialDescriptor, i12, g0.a, f16);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    case 10:
                        f15 = (Float) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, g0.a, f15);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            f2 = f15;
            f10 = f16;
            str = str3;
            f11 = f17;
            tapAction = tapAction3;
            chatInputNodeStyle = chatInputNodeStyle3;
            z5 = z10;
            z6 = z8;
            i6 = i14;
            i10 = i15;
        }
        int i16 = i5;
        int i17 = i13;
        beginStructure.endStructure(serialDescriptor);
        return new ChatInputNode(i17, i16, i10, i6, chatInputNodeStyle, z6, tapAction, z5, str, f11, f10, f2, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ChatInputNode value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ChatInputNode.write$Self$chat_input_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
