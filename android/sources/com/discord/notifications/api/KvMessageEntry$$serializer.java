package com.discord.notifications.api;

import bs.h0;
import bs.h1;
import bs.j1;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.MessageId;
import com.discord.primitives.MessageId$$serializer;
import com.facebook.react.devsupport.StackTraceHelper;
import cs.r;
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
import kotlinx.serialization.json.JsonObject;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/notifications/api/KvMessageEntry.$serializer", "Lbs/h0;", "Lcom/discord/notifications/api/KvMessageEntry;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/notifications/api/KvMessageEntry;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/notifications/api/KvMessageEntry;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class KvMessageEntry$$serializer implements h0 {

    @NotNull
    public static final KvMessageEntry$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        KvMessageEntry$$serializer kvMessageEntry$$serializer = new KvMessageEntry$$serializer();
        INSTANCE = kvMessageEntry$$serializer;
        j1 j1Var = new j1("com.discord.notifications.api.KvMessageEntry", kvMessageEntry$$serializer, 5);
        j1Var.k("members", true);
        j1Var.k("users", true);
        j1Var.k("message", false);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("channelId", false);
        descriptor = j1Var;
    }

    private KvMessageEntry$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = KvMessageEntry.$childSerializers;
        return new KSerializer[]{lazyArr[0].getValue(), lazyArr[1].getValue(), r.a, MessageId$$serializer.INSTANCE, ChannelId$$serializer.INSTANCE};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final KvMessageEntry deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        List list;
        List list2;
        String str;
        ChannelId channelId;
        JsonObject jsonObject;
        int i5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = KvMessageEntry.$childSerializers;
        int i6 = 0;
        if (beginStructure.decodeSequentially()) {
            List list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 0, (DeserializationStrategy) lazyArr[0].getValue(), null);
            List list4 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 1, (DeserializationStrategy) lazyArr[1].getValue(), null);
            JsonObject jsonObject2 = (JsonObject) beginStructure.decodeSerializableElement(serialDescriptor, 2, r.a, null);
            MessageId messageId = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 3, MessageId$$serializer.INSTANCE, null);
            list = list4;
            list2 = list3;
            str = messageId != null ? messageId.m1198unboximpl() : null;
            channelId = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 4, ChannelId$$serializer.INSTANCE, null);
            jsonObject = jsonObject2;
            i5 = 31;
        } else {
            int i10 = 1;
            int i11 = 0;
            List list5 = null;
            List list6 = null;
            String str2 = null;
            ChannelId channelId2 = null;
            JsonObject jsonObject3 = null;
            while (i10 != 0) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                int i12 = i6;
                if (decodeElementIndex == -1) {
                    i6 = i12;
                    i10 = i6;
                } else if (decodeElementIndex != 0) {
                    if (decodeElementIndex == 1) {
                        list5 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 1, (DeserializationStrategy) lazyArr[1].getValue(), list5);
                        i11 |= 2;
                    } else if (decodeElementIndex == 2) {
                        jsonObject3 = (JsonObject) beginStructure.decodeSerializableElement(serialDescriptor, 2, r.a, jsonObject3);
                        i11 |= 4;
                    } else if (decodeElementIndex == 3) {
                        MessageId messageId2 = (MessageId) beginStructure.decodeSerializableElement(serialDescriptor, 3, MessageId$$serializer.INSTANCE, str2 != null ? MessageId.m1189boximpl(str2) : null);
                        str2 = messageId2 != null ? messageId2.m1198unboximpl() : null;
                        i11 |= 8;
                    } else {
                        if (decodeElementIndex != 4) {
                            throw new ds.r(decodeElementIndex);
                        }
                        channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 4, ChannelId$$serializer.INSTANCE, channelId2);
                        i11 |= 16;
                    }
                    i6 = i12;
                } else {
                    list6 = (List) beginStructure.decodeSerializableElement(serialDescriptor, i12, (DeserializationStrategy) lazyArr[i12].getValue(), list6);
                    i11 |= 1;
                    i6 = i12;
                }
            }
            list = list5;
            list2 = list6;
            str = str2;
            channelId = channelId2;
            jsonObject = jsonObject3;
            i5 = i11;
        }
        beginStructure.endStructure(serialDescriptor);
        return new KvMessageEntry(i5, list2, list, jsonObject, str, channelId, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull KvMessageEntry value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        KvMessageEntry.write$Self$notification_api_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
