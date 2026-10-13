package com.discord.activity_invites;

import bs.g0;
import bs.h0;
import bs.h1;
import bs.j1;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/activity_invites/RGBAColorModel.$serializer", "Lbs/h0;", "Lcom/discord/activity_invites/RGBAColorModel;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/activity_invites/RGBAColorModel;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/activity_invites/RGBAColorModel;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "activity_invites_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class RGBAColorModel$$serializer implements h0 {

    @NotNull
    public static final RGBAColorModel$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        RGBAColorModel$$serializer rGBAColorModel$$serializer = new RGBAColorModel$$serializer();
        INSTANCE = rGBAColorModel$$serializer;
        j1 j1Var = new j1("com.discord.activity_invites.RGBAColorModel", rGBAColorModel$$serializer, 4);
        j1Var.k("r", false);
        j1Var.k("g", false);
        j1Var.k("b", false);
        j1Var.k("a", false);
        descriptor = j1Var;
    }

    private RGBAColorModel$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        g0 g0Var = g0.a;
        return new KSerializer[]{g0Var, g0Var, g0Var, g0Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final RGBAColorModel deserialize(@NotNull Decoder decoder) {
        float f2;
        float f10;
        float f11;
        float f12;
        int i5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            f2 = beginStructure.decodeFloatElement(serialDescriptor, 0);
            float decodeFloatElement = beginStructure.decodeFloatElement(serialDescriptor, 1);
            float decodeFloatElement2 = beginStructure.decodeFloatElement(serialDescriptor, 2);
            f10 = beginStructure.decodeFloatElement(serialDescriptor, 3);
            f11 = decodeFloatElement2;
            f12 = decodeFloatElement;
            i5 = 15;
        } else {
            f2 = 0.0f;
            float f13 = 0.0f;
            float f14 = 0.0f;
            float f15 = 0.0f;
            boolean z5 = true;
            int i6 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    f2 = beginStructure.decodeFloatElement(serialDescriptor, 0);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    f15 = beginStructure.decodeFloatElement(serialDescriptor, 1);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    f14 = beginStructure.decodeFloatElement(serialDescriptor, 2);
                    i6 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    f13 = beginStructure.decodeFloatElement(serialDescriptor, 3);
                    i6 |= 8;
                }
            }
            f10 = f13;
            f11 = f14;
            f12 = f15;
            i5 = i6;
        }
        float f16 = f2;
        beginStructure.endStructure(serialDescriptor);
        return new RGBAColorModel(i5, f16, f12, f11, f10, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull RGBAColorModel value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        RGBAColorModel.write$Self$activity_invites_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
