package com.discord.chat.bridge.contentnode;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/SoundmojiContentNode.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/SoundmojiContentNode;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/SoundmojiContentNode;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/SoundmojiContentNode;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SoundmojiContentNode$$serializer implements h0 {

    @NotNull
    public static final SoundmojiContentNode$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        SoundmojiContentNode$$serializer soundmojiContentNode$$serializer = new SoundmojiContentNode$$serializer();
        INSTANCE = soundmojiContentNode$$serializer;
        j1 j1Var = new j1("soundboard", soundmojiContentNode$$serializer, 8);
        j1Var.k("soundId", false);
        j1Var.k("channelId", false);
        j1Var.k("messageId", false);
        j1Var.k("content", true);
        j1Var.k("guildId", true);
        j1Var.k("jumboable", true);
        j1Var.k("emojiId", true);
        j1Var.k("emojiName", true);
        descriptor = j1Var;
    }

    private SoundmojiContentNode$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, ChannelId$$serializer.INSTANCE, MessageId$$serializer.INSTANCE, e.o(v1Var), e.o(v1Var), g.a, e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SoundmojiContentNode deserialize(@NotNull Decoder decoder) {
        String str;
        int i5;
        ChannelId channelId;
        String str2;
        String str3;
        String str4;
        boolean z5;
        String str5;
        String str6;
        char c6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 7;
        int i10 = 6;
        String str7 = null;
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            ChannelId channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, null);
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 2, MessageId$$serializer.INSTANCE, null);
            String m1198unboximpl = messageId != null ? messageId.m1198unboximpl() : null;
            v1 v1Var = v1.a;
            String str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            String str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 5);
            String str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            str4 = str10;
            z5 = decodeBooleanElement;
            str5 = str8;
            str2 = str9;
            str6 = m1198unboximpl;
            channelId = channelId2;
            i5 = 255;
        } else {
            boolean z6 = true;
            int i11 = 0;
            boolean z7 = false;
            str = null;
            ChannelId channelId3 = null;
            String str11 = null;
            String str12 = null;
            String str13 = null;
            String str14 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        c6 = 2;
                        z6 = false;
                        i6 = 7;
                        i10 = 6;
                    case 0:
                        c6 = 2;
                        str = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i11 |= 1;
                        i6 = 7;
                        i10 = 6;
                    case 1:
                        c6 = 2;
                        channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, channelId3);
                        i11 |= 2;
                        i6 = 7;
                        i10 = 6;
                    case 2:
                        c6 = 2;
                        MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 2, MessageId$$serializer.INSTANCE, str14 != null ? MessageId.m1189boximpl(str14) : null);
                        str14 = messageId2 != null ? messageId2.m1198unboximpl() : null;
                        i11 |= 4;
                        i6 = 7;
                        i10 = 6;
                    case 3:
                        str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str13);
                        i11 |= 8;
                    case 4:
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str7);
                        i11 |= 16;
                    case 5:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
                        i11 |= 32;
                    case 6:
                        str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, v1.a, str12);
                        i11 |= 64;
                    case 7:
                        str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i6, v1.a, str11);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i11;
            channelId = channelId3;
            str2 = str7;
            str3 = str11;
            str4 = str12;
            z5 = z7;
            str5 = str13;
            str6 = str14;
        }
        String str15 = str;
        beginStructure.endStructure(serialDescriptor);
        return new SoundmojiContentNode(i5, str15, channelId, str6, str5, str2, z5, str4, str3, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull SoundmojiContentNode value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        SoundmojiContentNode.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
