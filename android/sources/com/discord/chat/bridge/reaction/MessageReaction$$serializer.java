package com.discord.chat.bridge.reaction;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/reaction/MessageReaction.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/reaction/MessageReaction;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/reaction/MessageReaction;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/reaction/MessageReaction;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageReaction$$serializer implements h0 {

    @NotNull
    public static final MessageReaction$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MessageReaction$$serializer messageReaction$$serializer = new MessageReaction$$serializer();
        INSTANCE = messageReaction$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.reaction.MessageReaction", messageReaction$$serializer, 7);
        j1Var.k("count", false);
        j1Var.k("me", false);
        j1Var.k("me_burst", true);
        j1Var.k("emoji", false);
        j1Var.k("burst_count", true);
        j1Var.k("themedBurstColors", true);
        j1Var.k("isMe", true);
        descriptor = j1Var;
    }

    private MessageReaction$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        KSerializer o6 = e.o(ThemedBurstReactionColorPalette$$serializer.INSTANCE);
        o0 o0Var = o0.a;
        g gVar = g.a;
        return new KSerializer[]{o0Var, gVar, gVar, MessageReactionEmoji$$serializer.INSTANCE, o0Var, o6, gVar};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MessageReaction deserialize(@NotNull Decoder decoder) {
        int i5;
        ThemedBurstReactionColorPalette themedBurstReactionColorPalette;
        boolean z5;
        int i6;
        boolean z6;
        boolean z7;
        int i10;
        MessageReactionEmoji messageReactionEmoji;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 1);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 2);
            MessageReactionEmoji messageReactionEmoji2 = (MessageReactionEmoji) beginStructure.decodeSerializableElement(serialDescriptor, 3, MessageReactionEmoji$$serializer.INSTANCE, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 4);
            ThemedBurstReactionColorPalette themedBurstReactionColorPalette2 = (ThemedBurstReactionColorPalette) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, ThemedBurstReactionColorPalette$$serializer.INSTANCE, null);
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            themedBurstReactionColorPalette = themedBurstReactionColorPalette2;
            messageReactionEmoji = messageReactionEmoji2;
            i6 = decodeIntElement;
            z6 = decodeBooleanElement2;
            z7 = decodeBooleanElement;
            i10 = 127;
        } else {
            boolean z8 = true;
            i5 = 0;
            int i11 = 0;
            boolean z10 = false;
            boolean z11 = false;
            int i12 = 0;
            MessageReactionEmoji messageReactionEmoji3 = null;
            boolean z12 = false;
            ThemedBurstReactionColorPalette themedBurstReactionColorPalette3 = null;
            while (z8) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z8 = false;
                        break;
                    case 0:
                        i12 |= 1;
                        i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        continue;
                    case 1:
                        z11 = beginStructure.decodeBooleanElement(serialDescriptor, 1);
                        i12 |= 2;
                        continue;
                    case 2:
                        z10 = beginStructure.decodeBooleanElement(serialDescriptor, 2);
                        i12 |= 4;
                        break;
                    case 3:
                        messageReactionEmoji3 = (MessageReactionEmoji) beginStructure.decodeSerializableElement(serialDescriptor, 3, MessageReactionEmoji$$serializer.INSTANCE, messageReactionEmoji3);
                        i12 |= 8;
                        break;
                    case 4:
                        i11 = beginStructure.decodeIntElement(serialDescriptor, 4);
                        i12 |= 16;
                        break;
                    case 5:
                        themedBurstReactionColorPalette3 = (ThemedBurstReactionColorPalette) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, ThemedBurstReactionColorPalette$$serializer.INSTANCE, themedBurstReactionColorPalette3);
                        i12 |= 32;
                        break;
                    case 6:
                        z12 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
                        i12 |= 64;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            themedBurstReactionColorPalette = themedBurstReactionColorPalette3;
            z5 = z12;
            i6 = i11;
            z6 = z10;
            z7 = z11;
            i10 = i12;
            messageReactionEmoji = messageReactionEmoji3;
        }
        int i13 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new MessageReaction(i10, i13, z7, z6, messageReactionEmoji, i6, themedBurstReactionColorPalette, z5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MessageReaction value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MessageReaction.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
