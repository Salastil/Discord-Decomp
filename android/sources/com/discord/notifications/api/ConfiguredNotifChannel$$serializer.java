package com.discord.notifications.api;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/notifications/api/ConfiguredNotifChannel.$serializer", "Lbs/h0;", "Lcom/discord/notifications/api/ConfiguredNotifChannel;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/notifications/api/ConfiguredNotifChannel;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/notifications/api/ConfiguredNotifChannel;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ConfiguredNotifChannel$$serializer implements h0 {

    @NotNull
    public static final ConfiguredNotifChannel$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ConfiguredNotifChannel$$serializer configuredNotifChannel$$serializer = new ConfiguredNotifChannel$$serializer();
        INSTANCE = configuredNotifChannel$$serializer;
        j1 j1Var = new j1("com.discord.notifications.api.ConfiguredNotifChannel", configuredNotifChannel$$serializer, 10);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("groupId", false);
        j1Var.k("importance", false);
        j1Var.k("badge", true);
        j1Var.k("vibrate", true);
        j1Var.k("lights", true);
        j1Var.k("ringtone", true);
        j1Var.k("aka", true);
        j1Var.k(StackTraceHelper.NAME_KEY, false);
        j1Var.k("description", true);
        descriptor = j1Var;
    }

    private ConfiguredNotifChannel$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = ConfiguredNotifChannel.$childSerializers;
        v1 v1Var = v1.a;
        g gVar = g.a;
        return new KSerializer[]{v1Var, v1Var, o0.a, gVar, gVar, gVar, e.o(v1Var), lazyArr[7].getValue(), v1Var, e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ConfiguredNotifChannel deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        boolean z5;
        String str;
        List list;
        String str2;
        int i5;
        boolean z6;
        boolean z7;
        int i6;
        String str3;
        String str4;
        String str5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = ConfiguredNotifChannel.$childSerializers;
        int i10 = 9;
        int i11 = 0;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 1);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 2);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 3);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 4);
            boolean decodeBooleanElement3 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
            v1 v1Var = v1.a;
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            List list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 7, (DeserializationStrategy) lazyArr[7].getValue(), null);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 8);
            list = list2;
            str3 = decodeStringElement;
            str = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, v1Var, null);
            str2 = str6;
            z5 = decodeBooleanElement3;
            z6 = decodeBooleanElement;
            str5 = decodeStringElement3;
            z7 = decodeBooleanElement2;
            i6 = decodeIntElement;
            i5 = 1023;
            str4 = decodeStringElement2;
        } else {
            boolean z8 = true;
            boolean z10 = false;
            boolean z11 = false;
            int i12 = 0;
            String str7 = null;
            List list3 = null;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            String str11 = null;
            boolean z12 = false;
            while (z8) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z8 = false;
                        i10 = 9;
                    case 0:
                        str9 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i11 |= 1;
                        i10 = 9;
                    case 1:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i11 |= 2;
                        i10 = 9;
                    case 2:
                        i12 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i11 |= 4;
                        i10 = 9;
                    case 3:
                        i11 |= 8;
                        z12 = beginStructure.decodeBooleanElement(serialDescriptor, 3);
                    case 4:
                        z11 = beginStructure.decodeBooleanElement(serialDescriptor, 4);
                        i11 |= 16;
                    case 5:
                        z10 = beginStructure.decodeBooleanElement(serialDescriptor, 5);
                        i11 |= 32;
                    case 6:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str8);
                        i11 |= 64;
                    case 7:
                        list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 7, (DeserializationStrategy) lazyArr[7].getValue(), list3);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 8);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, v1.a, str7);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            z5 = z10;
            str = str7;
            list = list3;
            str2 = str8;
            i5 = i11;
            z6 = z12;
            z7 = z11;
            i6 = i12;
            str3 = str9;
            str4 = str10;
            str5 = str11;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ConfiguredNotifChannel(i5, str3, str4, i6, z6, z7, z5, str2, list, str5, str, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ConfiguredNotifChannel value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ConfiguredNotifChannel.write$Self$notification_api_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
