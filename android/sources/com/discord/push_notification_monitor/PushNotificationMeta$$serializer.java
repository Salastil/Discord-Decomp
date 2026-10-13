package com.discord.push_notification_monitor;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.t0;
import bs.v1;
import com.facebook.react.modules.dialog.AlertFragment;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/push_notification_monitor/PushNotificationMeta.$serializer", "Lbs/h0;", "Lcom/discord/push_notification_monitor/PushNotificationMeta;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/push_notification_monitor/PushNotificationMeta;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/push_notification_monitor/PushNotificationMeta;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "push_notification_monitor_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PushNotificationMeta$$serializer implements h0 {

    @NotNull
    public static final PushNotificationMeta$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PushNotificationMeta$$serializer pushNotificationMeta$$serializer = new PushNotificationMeta$$serializer();
        INSTANCE = pushNotificationMeta$$serializer;
        j1 j1Var = new j1("com.discord.push_notification_monitor.PushNotificationMeta", pushNotificationMeta$$serializer, 7);
        j1Var.k("receivedTimestamp", false);
        j1Var.k("silent", false);
        j1Var.k("type", false);
        j1Var.k(AlertFragment.ARG_TITLE, false);
        j1Var.k("content", false);
        j1Var.k("channelId", true);
        j1Var.k("messageId", true);
        descriptor = j1Var;
    }

    private PushNotificationMeta$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{t0.a, g.a, v1Var, v1Var, e.o(v1Var), e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PushNotificationMeta deserialize(@NotNull Decoder decoder) {
        boolean z5;
        int i5;
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        long j;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            long decodeLongElement = beginStructure.decodeLongElement(serialDescriptor, 0);
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 1);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            v1 v1Var = v1.a;
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            str4 = str7;
            str2 = decodeStringElement2;
            str3 = str6;
            str = decodeStringElement;
            i5 = 127;
            j = decodeLongElement;
        } else {
            boolean z6 = true;
            z5 = false;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            long j5 = 0;
            int i6 = 0;
            String str11 = null;
            String str12 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        continue;
                    case 0:
                        j5 = beginStructure.decodeLongElement(serialDescriptor, 0);
                        i6 |= 1;
                        continue;
                    case 1:
                        z5 = beginStructure.decodeBooleanElement(serialDescriptor, 1);
                        i6 |= 2;
                        break;
                    case 2:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i6 |= 4;
                        break;
                    case 3:
                        str12 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i6 |= 8;
                        break;
                    case 4:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str8);
                        i6 |= 16;
                        break;
                    case 5:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str9);
                        i6 |= 32;
                        break;
                    case 6:
                        str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1.a, str10);
                        i6 |= 64;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i6;
            str = str11;
            str2 = str12;
            str3 = str8;
            str4 = str9;
            str5 = str10;
            j = j5;
        }
        boolean z7 = z5;
        beginStructure.endStructure(serialDescriptor);
        return new PushNotificationMeta(i5, j, z7, str, str2, str3, str4, str5, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PushNotificationMeta value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PushNotificationMeta.write$Self$push_notification_monitor_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
