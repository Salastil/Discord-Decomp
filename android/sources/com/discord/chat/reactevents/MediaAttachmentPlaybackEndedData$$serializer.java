package com.discord.chat.reactevents;

import bs.g;
import bs.g0;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/reactevents/MediaAttachmentPlaybackEndedData.$serializer", "Lbs/h0;", "Lcom/discord/chat/reactevents/MediaAttachmentPlaybackEndedData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/reactevents/MediaAttachmentPlaybackEndedData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/reactevents/MediaAttachmentPlaybackEndedData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MediaAttachmentPlaybackEndedData$$serializer implements h0 {

    @NotNull
    public static final MediaAttachmentPlaybackEndedData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MediaAttachmentPlaybackEndedData$$serializer mediaAttachmentPlaybackEndedData$$serializer = new MediaAttachmentPlaybackEndedData$$serializer();
        INSTANCE = mediaAttachmentPlaybackEndedData$$serializer;
        j1 j1Var = new j1("com.discord.chat.reactevents.MediaAttachmentPlaybackEndedData", mediaAttachmentPlaybackEndedData$$serializer, 7);
        j1Var.k("messageId", false);
        j1Var.k("totalDurationSecs", false);
        j1Var.k("endDurationSecs", false);
        j1Var.k("senderUserId", false);
        j1Var.k("durationListeningSecs", false);
        j1Var.k("isVoiceMessage", false);
        j1Var.k("attachmentId", false);
        descriptor = j1Var;
    }

    private MediaAttachmentPlaybackEndedData$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        g0 g0Var = g0.a;
        return new KSerializer[]{MessageId$$serializer.INSTANCE, g0Var, g0Var, UserId$$serializer.INSTANCE, g0Var, g.a, v1.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MediaAttachmentPlaybackEndedData deserialize(@NotNull Decoder decoder) {
        String str;
        String str2;
        boolean z5;
        UserId userId;
        float f2;
        float f10;
        float f11;
        int i5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, null);
            str = messageId != null ? messageId.m1198unboximpl() : null;
            float decodeFloatElement = beginStructure.decodeFloatElement(serialDescriptor, 1);
            float decodeFloatElement2 = beginStructure.decodeFloatElement(serialDescriptor, 2);
            UserId userId2 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 3, UserId$$serializer.INSTANCE, null);
            float decodeFloatElement3 = beginStructure.decodeFloatElement(serialDescriptor, 4);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 5);
            str2 = beginStructure.decodeStringElement(serialDescriptor, 6);
            z5 = decodeBooleanElement;
            userId = userId2;
            f2 = decodeFloatElement3;
            f10 = decodeFloatElement2;
            f11 = decodeFloatElement;
            i5 = 127;
        } else {
            float f12 = 0.0f;
            float f13 = 0.0f;
            float f14 = 0.0f;
            boolean z6 = true;
            boolean z7 = false;
            int i6 = 0;
            str = null;
            String str3 = null;
            UserId userId3 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        break;
                    case 0:
                        MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 0, MessageId$$serializer.INSTANCE, str != null ? MessageId.m1189boximpl(str) : null);
                        str = messageId2 != null ? messageId2.m1198unboximpl() : null;
                        i6 |= 1;
                        break;
                    case 1:
                        f14 = beginStructure.decodeFloatElement(serialDescriptor, 1);
                        i6 |= 2;
                        break;
                    case 2:
                        f13 = beginStructure.decodeFloatElement(serialDescriptor, 2);
                        i6 |= 4;
                        break;
                    case 3:
                        userId3 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 3, UserId$$serializer.INSTANCE, userId3);
                        i6 |= 8;
                        break;
                    case 4:
                        f12 = beginStructure.decodeFloatElement(serialDescriptor, 4);
                        i6 |= 16;
                        break;
                    case 5:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
                        i6 |= 32;
                        break;
                    case 6:
                        str3 = beginStructure.decodeStringElement(serialDescriptor, 6);
                        i6 |= 64;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str2 = str3;
            z5 = z7;
            userId = userId3;
            f2 = f12;
            f10 = f13;
            f11 = f14;
            i5 = i6;
        }
        String str4 = str;
        beginStructure.endStructure(serialDescriptor);
        return new MediaAttachmentPlaybackEndedData(i5, str4, f11, f10, userId, f2, z5, str2, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MediaAttachmentPlaybackEndedData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MediaAttachmentPlaybackEndedData.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
