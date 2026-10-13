package com.discord.app_database;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.t0;
import bs.v1;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/app_database/NonGuildVersion.$serializer", "Lbs/h0;", "Lcom/discord/app_database/NonGuildVersion;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/app_database/NonGuildVersion;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/app_database/NonGuildVersion;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "app_database_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class NonGuildVersion$$serializer implements h0 {

    @NotNull
    public static final NonGuildVersion$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        NonGuildVersion$$serializer nonGuildVersion$$serializer = new NonGuildVersion$$serializer();
        INSTANCE = nonGuildVersion$$serializer;
        j1 j1Var = new j1("com.discord.app_database.NonGuildVersion", nonGuildVersion$$serializer, 3);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("version", true);
        j1Var.k("versionString", true);
        descriptor = j1Var;
    }

    private NonGuildVersion$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, t0.a, e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final NonGuildVersion deserialize(@NotNull Decoder decoder) {
        String str;
        int i5;
        long j;
        String str2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            long decodeLongElement = beginStructure.decodeLongElement(serialDescriptor, 1);
            i5 = 7;
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, null);
            j = decodeLongElement;
        } else {
            long j5 = 0;
            boolean z5 = true;
            str = null;
            String str3 = null;
            i5 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    str = beginStructure.decodeStringElement(serialDescriptor, 0);
                    i5 |= 1;
                } else if (decodeElementIndex == 1) {
                    j5 = beginStructure.decodeLongElement(serialDescriptor, 1);
                    i5 |= 2;
                } else {
                    if (decodeElementIndex != 2) {
                        throw new r(decodeElementIndex);
                    }
                    str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str3);
                    i5 |= 4;
                }
            }
            j = j5;
            str2 = str3;
        }
        String str4 = str;
        int i6 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new NonGuildVersion(i6, str4, j, str2, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull NonGuildVersion value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        NonGuildVersion.write$Self$app_database_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
