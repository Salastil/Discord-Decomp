package com.discord.chat.bridge.contentnode;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.chat.bridge.MessageType;
import com.discord.chat.bridge.contentnode.LinkContextData;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
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
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/LinkContextData.BindTapCommandName.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/LinkContextData$BindTapCommandName;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/LinkContextData$BindTapCommandName;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/LinkContextData$BindTapCommandName;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LinkContextData$BindTapCommandName$$serializer implements h0 {

    @NotNull
    public static final LinkContextData$BindTapCommandName$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        LinkContextData$BindTapCommandName$$serializer linkContextData$BindTapCommandName$$serializer = new LinkContextData$BindTapCommandName$$serializer();
        INSTANCE = linkContextData$BindTapCommandName$$serializer;
        j1 j1Var = new j1("bindTapCommandName", linkContextData$BindTapCommandName$$serializer, 6);
        j1Var.k("action", false);
        j1Var.k("userId", false);
        j1Var.k("messageId", false);
        j1Var.k("applicationUserId", false);
        j1Var.k("messageType", false);
        j1Var.k("messageChannelId", false);
        j1Var.l(new LinkContextData$LinkContext$Companion$annotationImpl$kotlinx_serialization_json_JsonClassDiscriminator$0("action"));
        descriptor = j1Var;
    }

    private LinkContextData$BindTapCommandName$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        UserId$$serializer userId$$serializer = UserId$$serializer.INSTANCE;
        return new KSerializer[]{v1.a, userId$$serializer, MessageId$$serializer.INSTANCE, userId$$serializer, MessageType.Serializer.INSTANCE, ChannelId$$serializer.INSTANCE};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final LinkContextData.BindTapCommandName deserialize(@NotNull Decoder decoder) {
        String str;
        ChannelId channelId;
        UserId userId;
        MessageType messageType;
        String str2;
        UserId userId2;
        int i5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            UserId$$serializer userId$$serializer = UserId$$serializer.INSTANCE;
            UserId userId3 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 1, userId$$serializer, null);
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 2, MessageId$$serializer.INSTANCE, null);
            String m1198unboximpl = messageId != null ? messageId.m1198unboximpl() : null;
            UserId userId4 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 3, userId$$serializer, null);
            MessageType messageType2 = (MessageType) beginStructure.decodeSerializableElement(serialDescriptor, 4, MessageType.Serializer.INSTANCE, null);
            channelId = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 5, ChannelId$$serializer.INSTANCE, null);
            userId = userId4;
            messageType = messageType2;
            str2 = m1198unboximpl;
            userId2 = userId3;
            i5 = 63;
        } else {
            boolean z5 = true;
            int i6 = 0;
            str = null;
            ChannelId channelId2 = null;
            UserId userId5 = null;
            MessageType messageType3 = null;
            String str3 = null;
            UserId userId6 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        break;
                    case 0:
                        str = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 |= 1;
                        break;
                    case 1:
                        userId6 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 1, UserId$$serializer.INSTANCE, userId6);
                        i6 |= 2;
                        break;
                    case 2:
                        MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 2, MessageId$$serializer.INSTANCE, str3 != null ? MessageId.m1189boximpl(str3) : null);
                        str3 = messageId2 != null ? messageId2.m1198unboximpl() : null;
                        i6 |= 4;
                        break;
                    case 3:
                        userId5 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 3, UserId$$serializer.INSTANCE, userId5);
                        i6 |= 8;
                        break;
                    case 4:
                        messageType3 = (MessageType) beginStructure.decodeSerializableElement(serialDescriptor, 4, MessageType.Serializer.INSTANCE, messageType3);
                        i6 |= 16;
                        break;
                    case 5:
                        channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 5, ChannelId$$serializer.INSTANCE, channelId2);
                        i6 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            channelId = channelId2;
            userId = userId5;
            messageType = messageType3;
            str2 = str3;
            userId2 = userId6;
            i5 = i6;
        }
        String str4 = str;
        beginStructure.endStructure(serialDescriptor);
        return new LinkContextData.BindTapCommandName(i5, str4, userId2, str2, userId, messageType, channelId, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull LinkContextData.BindTapCommandName value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        LinkContextData.BindTapCommandName.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
