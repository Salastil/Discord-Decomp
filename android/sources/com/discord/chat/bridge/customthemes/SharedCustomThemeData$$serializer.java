package com.discord.chat.bridge.customthemes;

import bs.g0;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.rnlineargradient.LinearGradientManager;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/customthemes/SharedCustomThemeData.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/customthemes/SharedCustomThemeData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/customthemes/SharedCustomThemeData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/customthemes/SharedCustomThemeData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SharedCustomThemeData$$serializer implements h0 {

    @NotNull
    public static final SharedCustomThemeData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        SharedCustomThemeData$$serializer sharedCustomThemeData$$serializer = new SharedCustomThemeData$$serializer();
        INSTANCE = sharedCustomThemeData$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.customthemes.SharedCustomThemeData", sharedCustomThemeData$$serializer, 8);
        j1Var.k(LinearGradientManager.PROP_COLORS, false);
        j1Var.k("gradientAngle", false);
        j1Var.k("createdBy", false);
        j1Var.k("createdByAvatarUrl", false);
        j1Var.k("nitroWheelIconUrl", false);
        j1Var.k("previewLabel", false);
        j1Var.k("previewHeading", false);
        j1Var.k("createdByLabel", false);
        descriptor = j1Var;
    }

    private SharedCustomThemeData$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = SharedCustomThemeData.$childSerializers;
        v1 v1Var = v1.a;
        return new KSerializer[]{lazyArr[0].getValue(), g0.a, v1Var, v1Var, v1Var, v1Var, v1Var, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SharedCustomThemeData deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        float f2;
        int i5;
        List list;
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = SharedCustomThemeData.$childSerializers;
        int i6 = 7;
        int i10 = 0;
        if (beginStructure.decodeSequentially()) {
            List list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 0, (DeserializationStrategy) lazyArr[0].getValue(), null);
            f2 = beginStructure.decodeFloatElement(serialDescriptor, 1);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 4);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 5);
            String decodeStringElement5 = beginStructure.decodeStringElement(serialDescriptor, 6);
            list = list2;
            str6 = beginStructure.decodeStringElement(serialDescriptor, 7);
            str5 = decodeStringElement5;
            str4 = decodeStringElement4;
            str2 = decodeStringElement2;
            str3 = decodeStringElement3;
            str = decodeStringElement;
            i5 = 255;
        } else {
            f2 = 0.0f;
            int i11 = 1;
            List list3 = null;
            String str7 = null;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            String str11 = null;
            String str12 = null;
            int i12 = 0;
            while (i11 != 0) {
                int i13 = i10;
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        i10 = i13;
                        i11 = i10;
                        i6 = 7;
                    case 0:
                        list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, i13, (DeserializationStrategy) lazyArr[i13].getValue(), list3);
                        i12 |= 1;
                        i10 = i13;
                        i6 = 7;
                    case 1:
                        f2 = beginStructure.decodeFloatElement(serialDescriptor, 1);
                        i12 |= 2;
                        i10 = i13;
                    case 2:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i12 |= 4;
                        i10 = i13;
                    case 3:
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i12 |= 8;
                        i10 = i13;
                    case 4:
                        str9 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i12 |= 16;
                        i10 = i13;
                    case 5:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 5);
                        i12 |= 32;
                        i10 = i13;
                    case 6:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 6);
                        i12 |= 64;
                        i10 = i13;
                    case 7:
                        str12 = beginStructure.decodeStringElement(serialDescriptor, i6);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i10 = i13;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i12;
            list = list3;
            str = str7;
            str2 = str8;
            str3 = str9;
            str4 = str10;
            str5 = str11;
            str6 = str12;
        }
        float f10 = f2;
        beginStructure.endStructure(serialDescriptor);
        return new SharedCustomThemeData(i5, list, f10, str, str2, str3, str4, str5, str6, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull SharedCustomThemeData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        SharedCustomThemeData.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
