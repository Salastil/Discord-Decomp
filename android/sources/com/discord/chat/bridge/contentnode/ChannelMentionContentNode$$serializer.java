package com.discord.chat.bridge.contentnode;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import ds.r;
import fo.d;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/ChannelMentionContentNode.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/ChannelMentionContentNode;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/ChannelMentionContentNode;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/ChannelMentionContentNode;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ChannelMentionContentNode$$serializer implements h0 {

    @NotNull
    public static final ChannelMentionContentNode$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ChannelMentionContentNode$$serializer channelMentionContentNode$$serializer = new ChannelMentionContentNode$$serializer();
        INSTANCE = channelMentionContentNode$$serializer;
        j1 j1Var = new j1("channelMention", channelMentionContentNode$$serializer, 6);
        j1Var.k("channelId", false);
        j1Var.k("guildId", true);
        j1Var.k("messageId", true);
        j1Var.k("originalLink", true);
        j1Var.k("inContent", true);
        j1Var.k("content", false);
        descriptor = j1Var;
    }

    private ChannelMentionContentNode$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = ChannelMentionContentNode.$childSerializers;
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o((KSerializer) lazyArr[4].getValue()), e.o((KSerializer) lazyArr[5].getValue())};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ChannelMentionContentNode deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        String str;
        String str2;
        String str3;
        String str4;
        List list;
        List list2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = ChannelMentionContentNode.$childSerializers;
        String str5 = null;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            v1 v1Var = v1.a;
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1Var, null);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            String str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            List list3 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, (DeserializationStrategy) lazyArr[4].getValue(), null);
            list2 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, (DeserializationStrategy) lazyArr[5].getValue(), null);
            str = decodeStringElement;
            str4 = str8;
            str3 = str7;
            i5 = 63;
            list = list3;
            str2 = str6;
        } else {
            boolean z5 = true;
            int i6 = 0;
            String str9 = null;
            String str10 = null;
            String str11 = null;
            List list4 = null;
            List list5 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        continue;
                    case 0:
                        str5 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 |= 1;
                        continue;
                    case 1:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str9);
                        i6 |= 2;
                        break;
                    case 2:
                        str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str10);
                        i6 |= 4;
                        break;
                    case 3:
                        str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str11);
                        i6 |= 8;
                        break;
                    case 4:
                        list4 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, (DeserializationStrategy) lazyArr[4].getValue(), list4);
                        i6 |= 16;
                        break;
                    case 5:
                        list5 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, (DeserializationStrategy) lazyArr[5].getValue(), list5);
                        i6 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i6;
            str = str5;
            str2 = str9;
            str3 = str10;
            str4 = str11;
            list = list4;
            list2 = list5;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ChannelMentionContentNode(i5, str, str2, str3, str4, list, list2, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ChannelMentionContentNode value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ChannelMentionContentNode.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
