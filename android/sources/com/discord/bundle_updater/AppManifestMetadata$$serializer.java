package com.discord.bundle_updater;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/bundle_updater/AppManifestMetadata.$serializer", "Lbs/h0;", "Lcom/discord/bundle_updater/AppManifestMetadata;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/bundle_updater/AppManifestMetadata;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/bundle_updater/AppManifestMetadata;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class AppManifestMetadata$$serializer implements h0 {

    @NotNull
    public static final AppManifestMetadata$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        AppManifestMetadata$$serializer appManifestMetadata$$serializer = new AppManifestMetadata$$serializer();
        INSTANCE = appManifestMetadata$$serializer;
        j1 j1Var = new j1("com.discord.bundle_updater.AppManifestMetadata", appManifestMetadata$$serializer, 4);
        j1Var.k("build", false);
        j1Var.k("release_name", true);
        j1Var.k("commit", false);
        j1Var.k("confirm_update", true);
        descriptor = j1Var;
    }

    private AppManifestMetadata$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, e.o(v1Var), v1Var, g.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final AppManifestMetadata deserialize(@NotNull Decoder decoder) {
        boolean z5;
        int i5;
        String str;
        String str2;
        String str3;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            String str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, null);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 2);
            str = decodeStringElement;
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 3);
            str3 = decodeStringElement2;
            str2 = str4;
            i5 = 15;
        } else {
            boolean z6 = true;
            boolean z7 = false;
            String str5 = null;
            String str6 = null;
            String str7 = null;
            int i6 = 0;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z6 = false;
                } else if (decodeElementIndex == 0) {
                    str5 = beginStructure.decodeStringElement(serialDescriptor, 0);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str6);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    str7 = beginStructure.decodeStringElement(serialDescriptor, 2);
                    i6 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    z7 = beginStructure.decodeBooleanElement(serialDescriptor, 3);
                    i6 |= 8;
                }
            }
            z5 = z7;
            i5 = i6;
            str = str5;
            str2 = str6;
            str3 = str7;
        }
        beginStructure.endStructure(serialDescriptor);
        return new AppManifestMetadata(i5, str, str2, str3, z5, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull AppManifestMetadata value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        AppManifestMetadata.write$Self$bundle_updater_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
