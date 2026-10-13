package uq;

import com.discord.key_commands.KeyCommandDescriptor;
import ip.f0;
import ip.i0;
import java.util.List;
import java.util.Set;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class j {
    public final xq.l a;

    /* renamed from: b, reason: collision with root package name */
    public final ip.a0 f19016b;

    /* renamed from: c, reason: collision with root package name */
    public final k f19017c;

    /* renamed from: d, reason: collision with root package name */
    public final f f19018d;

    /* renamed from: e, reason: collision with root package name */
    public final b f19019e;

    /* renamed from: f, reason: collision with root package name */
    public final i0 f19020f;

    /* renamed from: g, reason: collision with root package name */
    public final k f19021g;

    /* renamed from: h, reason: collision with root package name */
    public final m f19022h;

    /* renamed from: i, reason: collision with root package name */
    public final qp.b f19023i;
    public final n j;
    public final Iterable k;

    /* renamed from: l, reason: collision with root package name */
    public final e4.i f19024l;

    /* renamed from: m, reason: collision with root package name */
    public final k f19025m;

    /* renamed from: n, reason: collision with root package name */
    public final kp.b f19026n;

    /* renamed from: o, reason: collision with root package name */
    public final kp.d f19027o;

    /* renamed from: p, reason: collision with root package name */
    public final iq.g f19028p;

    /* renamed from: q, reason: collision with root package name */
    public final zq.l f19029q;

    /* renamed from: r, reason: collision with root package name */
    public final List f19030r;

    /* renamed from: s, reason: collision with root package name */
    public final l f19031s;

    /* renamed from: t, reason: collision with root package name */
    public final h f19032t;

    public j(xq.l storageManager, ip.a0 moduleDescriptor, f classDataFinder, b annotationAndConstantLoader, i0 packageFragmentProvider, m errorReporter, n flexibleTypeDeserializer, Iterable fictitiousClassDescriptorFactories, e4.i notFoundClasses, kp.b additionalClassPartsProvider, kp.d platformDependentDeclarationFilter, iq.g extensionRegistryLite, zq.l kotlinTypeChecker, lh.f samConversionResolver, List typeAttributeTranslators, l enumEntriesDeserializationSupport) {
        k configuration = k.f19033c;
        k localClassifierTypeSettings = k.f19037g;
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
        Intrinsics.checkNotNullParameter(configuration, "configuration");
        Intrinsics.checkNotNullParameter(classDataFinder, "classDataFinder");
        Intrinsics.checkNotNullParameter(annotationAndConstantLoader, "annotationAndConstantLoader");
        Intrinsics.checkNotNullParameter(packageFragmentProvider, "packageFragmentProvider");
        Intrinsics.checkNotNullParameter(localClassifierTypeSettings, "localClassifierTypeSettings");
        Intrinsics.checkNotNullParameter(errorReporter, "errorReporter");
        qp.b lookupTracker = qp.b.a;
        Intrinsics.checkNotNullParameter(lookupTracker, "lookupTracker");
        Intrinsics.checkNotNullParameter(flexibleTypeDeserializer, "flexibleTypeDeserializer");
        Intrinsics.checkNotNullParameter(fictitiousClassDescriptorFactories, "fictitiousClassDescriptorFactories");
        Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
        k contractDeserializer = i.a;
        Intrinsics.checkNotNullParameter(contractDeserializer, "contractDeserializer");
        Intrinsics.checkNotNullParameter(additionalClassPartsProvider, "additionalClassPartsProvider");
        Intrinsics.checkNotNullParameter(platformDependentDeclarationFilter, "platformDependentDeclarationFilter");
        Intrinsics.checkNotNullParameter(extensionRegistryLite, "extensionRegistryLite");
        Intrinsics.checkNotNullParameter(kotlinTypeChecker, "kotlinTypeChecker");
        Intrinsics.checkNotNullParameter(samConversionResolver, "samConversionResolver");
        Intrinsics.checkNotNullParameter(typeAttributeTranslators, "typeAttributeTranslators");
        Intrinsics.checkNotNullParameter(enumEntriesDeserializationSupport, "enumEntriesDeserializationSupport");
        this.a = storageManager;
        this.f19016b = moduleDescriptor;
        this.f19017c = configuration;
        this.f19018d = classDataFinder;
        this.f19019e = annotationAndConstantLoader;
        this.f19020f = packageFragmentProvider;
        this.f19021g = localClassifierTypeSettings;
        this.f19022h = errorReporter;
        this.f19023i = lookupTracker;
        this.j = flexibleTypeDeserializer;
        this.k = fictitiousClassDescriptorFactories;
        this.f19024l = notFoundClasses;
        this.f19025m = contractDeserializer;
        this.f19026n = additionalClassPartsProvider;
        this.f19027o = platformDependentDeclarationFilter;
        this.f19028p = extensionRegistryLite;
        this.f19029q = kotlinTypeChecker;
        this.f19030r = typeAttributeTranslators;
        this.f19031s = enumEntriesDeserializationSupport;
        this.f19032t = new h(this);
    }

    public final cc.k a(f0 descriptor, eq.g nameResolver, a4.i typeTable, eq.h versionRequirementTable, eq.a metadataVersion, wq.k kVar) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(nameResolver, "nameResolver");
        Intrinsics.checkNotNullParameter(typeTable, "typeTable");
        Intrinsics.checkNotNullParameter(versionRequirementTable, "versionRequirementTable");
        Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
        return new cc.k(this, nameResolver, descriptor, typeTable, versionRequirementTable, metadataVersion, kVar, null, m0.f13512d);
    }

    public final ip.f b(hq.b classId) {
        Intrinsics.checkNotNullParameter(classId, "classId");
        Set set = h.f19014c;
        return this.f19032t.a(classId, null);
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public j(xq.l lVar, ip.a0 a0Var, qa.t tVar, io.sentry.internal.debugmeta.c cVar, i0 i0Var, Iterable iterable, e4.i iVar, kp.b bVar, kp.d dVar, iq.g gVar, zq.l lVar2, lh.f fVar, int i5) {
        this(lVar, a0Var, tVar, cVar, i0Var, m.a, r7, iterable, iVar, bVar, dVar, gVar, r13, fVar, kotlin.collections.b0.c(yq.n.a), (i5 & KeyCommandDescriptor.ModifierFlags.ALTERNATE) != 0 ? k.f19034d : r0);
        zq.l lVar3;
        k kVar = k.f19035e;
        k kVar2 = k.f19036f;
        if ((i5 & KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT) != 0) {
            zq.l.f21396b.getClass();
            lVar3 = zq.k.f21395b;
        } else {
            lVar3 = lVar2;
        }
    }
}
