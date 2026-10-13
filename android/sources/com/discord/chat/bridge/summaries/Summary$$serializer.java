package com.discord.chat.bridge.summaries;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/summaries/Summary.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/summaries/Summary;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/summaries/Summary;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/summaries/Summary;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class Summary$$serializer implements h0 {

    @NotNull
    public static final Summary$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        Summary$$serializer summary$$serializer = new Summary$$serializer();
        INSTANCE = summary$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.summaries.Summary", summary$$serializer, 8);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("topic", false);
        j1Var.k("summShort", false);
        j1Var.k("people", false);
        j1Var.k("startId", false);
        j1Var.k("endId", false);
        j1Var.k("count", false);
        j1Var.k("channelId", false);
        descriptor = j1Var;
    }

    private Summary$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = Summary.$childSerializers;
        v1 v1Var = v1.a;
        MessageId$$serializer messageId$$serializer = MessageId$$serializer.INSTANCE;
        return new KSerializer[]{v1Var, v1Var, v1Var, lazyArr[3].getValue(), messageId$$serializer, messageId$$serializer, o0.a, ChannelId$$serializer.INSTANCE};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final Summary deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        List list;
        int i5;
        String str;
        ChannelId channelId;
        int i6;
        String str2;
        String str3;
        String str4;
        String str5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = Summary.$childSerializers;
        int i10 = 7;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 2);
            List list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 3, (DeserializationStrategy) lazyArr[3].getValue(), null);
            MessageId$$serializer messageId$$serializer = MessageId$$serializer.INSTANCE;
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 4, messageId$$serializer, null);
            String m1198unboximpl = messageId != null ? messageId.m1198unboximpl() : null;
            MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 5, messageId$$serializer, null);
            String m1198unboximpl2 = messageId2 != null ? messageId2.m1198unboximpl() : null;
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 6);
            list = list2;
            str = decodeStringElement;
            channelId = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 7, ChannelId$$serializer.INSTANCE, null);
            i6 = decodeIntElement;
            str2 = m1198unboximpl2;
            str3 = m1198unboximpl;
            str4 = decodeStringElement3;
            i5 = 255;
            str5 = decodeStringElement2;
        } else {
            boolean z5 = true;
            int i11 = 0;
            List list3 = null;
            String str6 = null;
            ChannelId channelId2 = null;
            String str7 = null;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            int i12 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i10 = 7;
                    case 0:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i12 |= 1;
                        i10 = 7;
                    case 1:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i12 |= 2;
                        i10 = 7;
                    case 2:
                        str9 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i12 |= 4;
                        i10 = 7;
                    case 3:
                        list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 3, (DeserializationStrategy) lazyArr[3].getValue(), list3);
                        i12 |= 8;
                        i10 = 7;
                    case 4:
                        MessageId messageId3 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 4, MessageId$$serializer.INSTANCE, str8 != null ? MessageId.m1189boximpl(str8) : null);
                        str8 = messageId3 != null ? messageId3.m1198unboximpl() : null;
                        i12 |= 16;
                        i10 = 7;
                    case 5:
                        MessageId messageId4 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 5, MessageId$$serializer.INSTANCE, str7 != null ? MessageId.m1189boximpl(str7) : null);
                        str7 = messageId4 != null ? messageId4.m1198unboximpl() : null;
                        i12 |= 32;
                        i10 = 7;
                    case 6:
                        i11 = beginStructure.decodeIntElement(serialDescriptor, 6);
                        i12 |= 64;
                    case 7:
                        channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, i10, ChannelId$$serializer.INSTANCE, channelId2);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            list = list3;
            i5 = i12;
            str = str6;
            channelId = channelId2;
            i6 = i11;
            str2 = str7;
            str3 = str8;
            str4 = str9;
            str5 = str10;
        }
        beginStructure.endStructure(serialDescriptor);
        return new Summary(i5, str, str5, str4, list, str3, str2, i6, channelId, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull Summary value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        Summary.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
