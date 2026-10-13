package com.discord.chat.bridge.contentnode;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.chat.bridge.contentnode.LinkContextData;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/LinkContextData.BindDismissMessage.DismissedMessage.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/LinkContextData$BindDismissMessage$DismissedMessage;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/LinkContextData$BindDismissMessage$DismissedMessage;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/LinkContextData$BindDismissMessage$DismissedMessage;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LinkContextData$BindDismissMessage$DismissedMessage$$serializer implements h0 {

    @NotNull
    public static final LinkContextData$BindDismissMessage$DismissedMessage$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        LinkContextData$BindDismissMessage$DismissedMessage$$serializer linkContextData$BindDismissMessage$DismissedMessage$$serializer = new LinkContextData$BindDismissMessage$DismissedMessage$$serializer();
        INSTANCE = linkContextData$BindDismissMessage$DismissedMessage$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.contentnode.LinkContextData.BindDismissMessage.DismissedMessage", linkContextData$BindDismissMessage$DismissedMessage$$serializer, 4);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("channel_id", false);
        j1Var.k("loggingName", true);
        j1Var.k("author", false);
        descriptor = j1Var;
    }

    private LinkContextData$BindDismissMessage$DismissedMessage$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        return new KSerializer[]{MessageId$$serializer.INSTANCE, ChannelId$$serializer.INSTANCE, e.o(v1.a), LinkContextData$BindDismissMessage$DismissedMessageAuthor$$serializer.INSTANCE};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final LinkContextData.BindDismissMessage.DismissedMessage deserialize(@NotNull Decoder decoder) {
        String str;
        LinkContextData.BindDismissMessage.DismissedMessageAuthor dismissedMessageAuthor;
        String str2;
        ChannelId channelId;
        int i5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, null);
            str = messageId != null ? messageId.m1198unboximpl() : null;
            ChannelId channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, null);
            String str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, null);
            dismissedMessageAuthor = (LinkContextData.BindDismissMessage.DismissedMessageAuthor) beginStructure.decodeSerializableElement(serialDescriptor, 3, LinkContextData$BindDismissMessage$DismissedMessageAuthor$$serializer.INSTANCE, null);
            str2 = str3;
            channelId = channelId2;
            i5 = 15;
        } else {
            boolean z5 = true;
            int i6 = 0;
            str = null;
            LinkContextData.BindDismissMessage.DismissedMessageAuthor dismissedMessageAuthor2 = null;
            String str4 = null;
            ChannelId channelId3 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, str != null ? MessageId.m1189boximpl(str) : null);
                    str = messageId2 != null ? messageId2.m1198unboximpl() : null;
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, channelId3);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str4);
                    i6 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    dismissedMessageAuthor2 = (LinkContextData.BindDismissMessage.DismissedMessageAuthor) beginStructure.decodeSerializableElement(serialDescriptor, 3, LinkContextData$BindDismissMessage$DismissedMessageAuthor$$serializer.INSTANCE, dismissedMessageAuthor2);
                    i6 |= 8;
                }
            }
            dismissedMessageAuthor = dismissedMessageAuthor2;
            str2 = str4;
            channelId = channelId3;
            i5 = i6;
        }
        String str5 = str;
        beginStructure.endStructure(serialDescriptor);
        return new LinkContextData.BindDismissMessage.DismissedMessage(i5, str5, channelId, str2, dismissedMessageAuthor, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull LinkContextData.BindDismissMessage.DismissedMessage value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        LinkContextData.BindDismissMessage.DismissedMessage.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
