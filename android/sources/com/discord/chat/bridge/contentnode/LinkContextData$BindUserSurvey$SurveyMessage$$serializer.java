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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/LinkContextData.BindUserSurvey.SurveyMessage.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/LinkContextData$BindUserSurvey$SurveyMessage;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/LinkContextData$BindUserSurvey$SurveyMessage;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/LinkContextData$BindUserSurvey$SurveyMessage;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LinkContextData$BindUserSurvey$SurveyMessage$$serializer implements h0 {

    @NotNull
    public static final LinkContextData$BindUserSurvey$SurveyMessage$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        LinkContextData$BindUserSurvey$SurveyMessage$$serializer linkContextData$BindUserSurvey$SurveyMessage$$serializer = new LinkContextData$BindUserSurvey$SurveyMessage$$serializer();
        INSTANCE = linkContextData$BindUserSurvey$SurveyMessage$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.contentnode.LinkContextData.BindUserSurvey.SurveyMessage", linkContextData$BindUserSurvey$SurveyMessage$$serializer, 3);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("channel_id", false);
        j1Var.k("loggingName", true);
        descriptor = j1Var;
    }

    private LinkContextData$BindUserSurvey$SurveyMessage$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        return new KSerializer[]{MessageId$$serializer.INSTANCE, ChannelId$$serializer.INSTANCE, e.o(v1.a)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final LinkContextData.BindUserSurvey.SurveyMessage deserialize(@NotNull Decoder decoder) {
        String str;
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
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, null);
            channelId = channelId2;
            i5 = 7;
        } else {
            boolean z5 = true;
            int i6 = 0;
            str = null;
            String str3 = null;
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
                } else {
                    if (decodeElementIndex != 2) {
                        throw new r(decodeElementIndex);
                    }
                    str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str3);
                    i6 |= 4;
                }
            }
            str2 = str3;
            channelId = channelId3;
            i5 = i6;
        }
        String str4 = str;
        beginStructure.endStructure(serialDescriptor);
        return new LinkContextData.BindUserSurvey.SurveyMessage(i5, str4, channelId, str2, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull LinkContextData.BindUserSurvey.SurveyMessage value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        LinkContextData.BindUserSurvey.SurveyMessage.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
