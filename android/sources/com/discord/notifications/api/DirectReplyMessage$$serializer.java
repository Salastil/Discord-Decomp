package com.discord.notifications.api;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.notifications.renderer.NotificationRenderer;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/notifications/api/DirectReplyMessage.$serializer", "Lbs/h0;", "Lcom/discord/notifications/api/DirectReplyMessage;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/notifications/api/DirectReplyMessage;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/notifications/api/DirectReplyMessage;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class DirectReplyMessage$$serializer implements h0 {

    @NotNull
    public static final DirectReplyMessage$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        DirectReplyMessage$$serializer directReplyMessage$$serializer = new DirectReplyMessage$$serializer();
        INSTANCE = directReplyMessage$$serializer;
        j1 j1Var = new j1("com.discord.notifications.api.DirectReplyMessage", directReplyMessage$$serializer, 8);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("channel_id", false);
        j1Var.k("author", false);
        j1Var.k("content", true);
        j1Var.k("type", true);
        j1Var.k("channelType", true);
        j1Var.k(NotificationRenderer.CHANNEL_NAME, true);
        j1Var.k("guildName", true);
        descriptor = j1Var;
    }

    private DirectReplyMessage$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        o0 o0Var = o0.a;
        return new KSerializer[]{MessageId$$serializer.INSTANCE, ChannelId$$serializer.INSTANCE, DirectReplyUser$$serializer.INSTANCE, o6, e.o(o0Var), e.o(o0Var), e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final DirectReplyMessage deserialize(@NotNull Decoder decoder) {
        String str;
        ChannelId channelId;
        int i5;
        DirectReplyUser directReplyUser;
        Integer num;
        String str2;
        String str3;
        Integer num2;
        String str4;
        ChannelId channelId2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 7;
        int i10 = 6;
        Integer num3 = null;
        if (beginStructure.decodeSequentially()) {
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, null);
            str = messageId != null ? messageId.m1198unboximpl() : null;
            ChannelId channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, null);
            DirectReplyUser directReplyUser2 = (DirectReplyUser) beginStructure.decodeSerializableElement(serialDescriptor, 2, DirectReplyUser$$serializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            o0 o0Var = o0.a;
            Integer num4 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0Var, null);
            Integer num5 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0Var, null);
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            str3 = str6;
            num2 = num5;
            str4 = str5;
            num = num4;
            directReplyUser = directReplyUser2;
            channelId = channelId3;
            i5 = 255;
        } else {
            boolean z5 = true;
            int i11 = 0;
            str = null;
            DirectReplyUser directReplyUser3 = null;
            String str7 = null;
            String str8 = null;
            Integer num6 = null;
            String str9 = null;
            ChannelId channelId4 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i6 = 7;
                        i10 = 6;
                    case 0:
                        channelId2 = channelId4;
                        MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, str != null ? MessageId.m1189boximpl(str) : null);
                        str = messageId2 != null ? messageId2.m1198unboximpl() : null;
                        i11 |= 1;
                        channelId4 = channelId2;
                        i6 = 7;
                        i10 = 6;
                    case 1:
                        channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, channelId4);
                        i11 |= 2;
                        channelId4 = channelId2;
                        i6 = 7;
                        i10 = 6;
                    case 2:
                        directReplyUser3 = (DirectReplyUser) beginStructure.decodeSerializableElement(serialDescriptor, 2, DirectReplyUser$$serializer.INSTANCE, directReplyUser3);
                        i11 |= 4;
                        i6 = 7;
                    case 3:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str9);
                        i11 |= 8;
                    case 4:
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, num3);
                        i11 |= 16;
                    case 5:
                        num6 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, num6);
                        i11 |= 32;
                    case 6:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, v1.a, str8);
                        i11 |= 64;
                    case 7:
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i6, v1.a, str7);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            channelId = channelId4;
            i5 = i11;
            directReplyUser = directReplyUser3;
            num = num3;
            str2 = str7;
            str3 = str8;
            num2 = num6;
            str4 = str9;
        }
        String str10 = str;
        beginStructure.endStructure(serialDescriptor);
        return new DirectReplyMessage(i5, str10, channelId, directReplyUser, str4, num, num2, str3, str2, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull DirectReplyMessage value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        DirectReplyMessage.write$Self$notification_api_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
