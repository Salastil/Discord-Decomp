package cp;

import com.discord.key_commands.KeyCommandDescriptor;
import java.lang.ref.WeakReference;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class v1 {
    public static final ConcurrentHashMap a = new ConcurrentHashMap();

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r2v0, types: [java.util.concurrent.ConcurrentHashMap] */
    /* JADX WARN: Type inference failed for: r32v0 */
    /* JADX WARN: Type inference failed for: r32v1 */
    /* JADX WARN: Type inference failed for: r32v2 */
    /* JADX WARN: Type inference failed for: r3v17, types: [java.util.concurrent.ConcurrentHashMap] */
    public static final np.e a(Class cls) {
        kp.b bVar;
        kp.d dVar;
        Intrinsics.checkNotNullParameter(cls, "<this>");
        ClassLoader classLoader = op.c.d(cls);
        d2 d2Var = new d2(classLoader);
        ?? r22 = a;
        WeakReference weakReference = (WeakReference) r22.get(d2Var);
        if (weakReference != null) {
            np.e eVar = (np.e) weakReference.get();
            if (eVar != null) {
                return eVar;
            }
            r22.remove(d2Var, weakReference);
        }
        Intrinsics.checkNotNullParameter(classLoader, "classLoader");
        ha.l kotlinClassFinder = new ha.l(classLoader);
        ClassLoader classLoader2 = Unit.class.getClassLoader();
        Intrinsics.checkNotNullExpressionValue(classLoader2, "getClassLoader(...)");
        ha.l finder = new ha.l(classLoader2);
        gj.c javaClassFinder = new gj.c(classLoader);
        String moduleName = "runtime module for " + classLoader;
        np.d errorReporter = np.d.f15584b;
        np.d javaSourceElementFactory = np.d.f15585c;
        Intrinsics.checkNotNullParameter(kotlinClassFinder, "kotlinClassFinder");
        Intrinsics.checkNotNullParameter(finder, "jvmBuiltInsKotlinClassFinder");
        Intrinsics.checkNotNullParameter(javaClassFinder, "javaClassFinder");
        Intrinsics.checkNotNullParameter(moduleName, "moduleName");
        Intrinsics.checkNotNullParameter(errorReporter, "errorReporter");
        Intrinsics.checkNotNullParameter(javaSourceElementFactory, "javaSourceElementFactory");
        xq.l storageManager = new xq.l("DeserializationComponentsForJava.ModuleData");
        hp.h hVar = hp.h.f10168d;
        hp.j jVar = new hp.j(storageManager);
        hq.e g6 = hq.e.g("<" + moduleName + '>');
        Intrinsics.checkNotNullExpressionValue(g6, "special(...)");
        lp.a0 moduleDescriptor = new lp.a0(g6, storageManager, jVar, 56);
        xq.n nVar = storageManager.a;
        nVar.lock();
        Throwable th2 = null;
        try {
            if (jVar.a != null) {
                throw new AssertionError("Built-ins module is already set: " + jVar.a + " (attempting to reset to " + moduleDescriptor + ")");
            }
            jVar.a = moduleDescriptor;
            nVar.unlock();
            Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
            fp.l computation = new fp.l(moduleDescriptor, 1);
            Intrinsics.checkNotNullParameter(computation, "computation");
            jVar.f10171f = computation;
            aq.f deserializedDescriptorResolver = new aq.f();
            qd.f singleModuleClassResolver = new qd.f(8);
            e4.i notFoundClasses = new e4.i(storageManager, moduleDescriptor);
            d2 d2Var2 = d2Var;
            aq.g packagePartProvider = aq.g.f2634d;
            Intrinsics.checkNotNullParameter(javaClassFinder, "javaClassFinder");
            Intrinsics.checkNotNullParameter(moduleDescriptor, "module");
            ?? r32 = r22;
            Intrinsics.checkNotNullParameter(storageManager, "storageManager");
            Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
            Intrinsics.checkNotNullParameter(kotlinClassFinder, "reflectKotlinClassFinder");
            Intrinsics.checkNotNullParameter(deserializedDescriptorResolver, "deserializedDescriptorResolver");
            Intrinsics.checkNotNullParameter(errorReporter, "errorReporter");
            Intrinsics.checkNotNullParameter(javaSourceElementFactory, "javaSourceElementFactory");
            Intrinsics.checkNotNullParameter(singleModuleClassResolver, "singleModuleClassResolver");
            Intrinsics.checkNotNullParameter(packagePartProvider, "packagePartProvider");
            sp.h DO_NOTHING = sp.h.f18089c;
            Intrinsics.checkNotNullExpressionValue(DO_NOTHING, "DO_NOTHING");
            sp.h EMPTY = sp.h.f18088b;
            Intrinsics.checkNotNullExpressionValue(EMPTY, "EMPTY");
            sp.h hVar2 = sp.h.a;
            kotlin.collections.m0 m0Var = kotlin.collections.m0.f13512d;
            lh.f fVar = new lh.f(storageManager, m0Var);
            ip.p0 p0Var = ip.p0.f12154i;
            fp.n nVar2 = new fp.n(moduleDescriptor, notFoundClasses);
            rp.u uVar = rp.u.f17488d;
            rp.b bVar2 = new rp.b(uVar);
            up.b javaResolverSettings = up.b.f18989d;
            Intrinsics.checkNotNullParameter(javaResolverSettings, "javaResolverSettings");
            zp.c typeEnhancement = new zp.c();
            Intrinsics.checkNotNullParameter(typeEnhancement, "typeEnhancement");
            zp.o oVar = new zp.o();
            zq.l.f21396b.getClass();
            zq.m kotlinTypeChecker = zq.k.f21395b;
            up.d packageFragmentProvider = new up.d(new up.a(storageManager, javaClassFinder, kotlinClassFinder, deserializedDescriptorResolver, DO_NOTHING, errorReporter, hVar2, fVar, javaSourceElementFactory, singleModuleClassResolver, packagePartProvider, p0Var, qp.b.a, moduleDescriptor, nVar2, bVar2, oVar, rp.m.a, javaResolverSettings, kotlinTypeChecker, uVar, new aq.g()));
            eq.f metadataVersion = eq.f.f8216g;
            Intrinsics.checkNotNullParameter(moduleDescriptor, "module");
            Intrinsics.checkNotNullParameter(storageManager, "storageManager");
            Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
            Intrinsics.checkNotNullParameter(packageFragmentProvider, "lazyJavaPackageFragmentProvider");
            Intrinsics.checkNotNullParameter(kotlinClassFinder, "reflectKotlinClassFinder");
            Intrinsics.checkNotNullParameter(deserializedDescriptorResolver, "deserializedDescriptorResolver");
            Intrinsics.checkNotNullParameter(errorReporter, "errorReporter");
            Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
            e4.e classDataFinder = new e4.e(deserializedDescriptorResolver, kotlinClassFinder);
            Intrinsics.checkNotNullParameter(moduleDescriptor, "module");
            Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
            Intrinsics.checkNotNullParameter(storageManager, "storageManager");
            Intrinsics.checkNotNullParameter(kotlinClassFinder, "kotlinClassFinder");
            Intrinsics.checkNotNullParameter(metadataVersion, "metadataVersion");
            Intrinsics.checkNotNullParameter(moduleDescriptor, "module");
            Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
            Intrinsics.checkNotNullParameter(storageManager, "storageManager");
            Intrinsics.checkNotNullParameter(kotlinClassFinder, "kotlinClassFinder");
            Intrinsics.checkNotNullParameter(storageManager, "storageManager");
            Intrinsics.checkNotNullParameter(kotlinClassFinder, "kotlinClassFinder");
            Intrinsics.checkNotNullParameter(kotlinClassFinder, "kotlinClassFinder");
            androidx.appcompat.widget.w annotationAndConstantLoader = new androidx.appcompat.widget.w();
            annotationAndConstantLoader.f1141d = kotlinClassFinder;
            annotationAndConstantLoader.f1142e = storageManager.c(new aq.a(0, annotationAndConstantLoader));
            annotationAndConstantLoader.f1143i = moduleDescriptor;
            annotationAndConstantLoader.f1144v = notFoundClasses;
            annotationAndConstantLoader.f1145w = new e4.c(moduleDescriptor, notFoundClasses);
            annotationAndConstantLoader.f1146x = eq.f.f8216g;
            Intrinsics.checkNotNullParameter(metadataVersion, "<set-?>");
            annotationAndConstantLoader.f1146x = metadataVersion;
            uq.k deserializationConfiguration = uq.k.f19033c;
            br.a typeAttributeTranslators = new br.a(kotlin.collections.b0.c(yq.n.a), 0);
            uq.k configuration = uq.k.f19033c;
            np.d errorReporter2 = np.d.f15584b;
            Intrinsics.checkNotNullParameter(storageManager, "storageManager");
            Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
            Intrinsics.checkNotNullParameter(configuration, "configuration");
            Intrinsics.checkNotNullParameter(classDataFinder, "classDataFinder");
            Intrinsics.checkNotNullParameter(annotationAndConstantLoader, "annotationAndConstantLoader");
            Intrinsics.checkNotNullParameter(packageFragmentProvider, "packageFragmentProvider");
            Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
            Intrinsics.checkNotNullParameter(errorReporter2, "errorReporter");
            qp.b lookupTracker = qp.b.a;
            Intrinsics.checkNotNullParameter(lookupTracker, "lookupTracker");
            uq.k contractDeserializer = uq.i.a;
            Intrinsics.checkNotNullParameter(contractDeserializer, "contractDeserializer");
            Intrinsics.checkNotNullParameter(kotlinTypeChecker, "kotlinTypeChecker");
            Intrinsics.checkNotNullParameter(typeAttributeTranslators, "typeAttributeTranslators");
            u4.c deserializationComponentsForJava = new u4.c();
            fp.i iVar = moduleDescriptor.f14124w;
            hp.j jVar2 = iVar instanceof hp.j ? (hp.j) iVar : null;
            aq.g gVar = aq.g.f2632b;
            kotlin.collections.m0 m0Var2 = kotlin.collections.m0.f13512d;
            if (jVar2 == null || (bVar = jVar2.K()) == null) {
                bVar = kp.a.f13612b;
            }
            kp.b bVar3 = bVar;
            if (jVar2 == null || (dVar = jVar2.K()) == null) {
                dVar = kp.a.f13614d;
            }
            deserializationComponentsForJava.f18811d = new uq.j(storageManager, moduleDescriptor, classDataFinder, annotationAndConstantLoader, packageFragmentProvider, errorReporter2, gVar, m0Var2, notFoundClasses, bVar3, dVar, gq.g.a, kotlinTypeChecker, new lh.f(storageManager, m0Var2), typeAttributeTranslators.f3155d, uq.k.f19036f);
            uq.j jVar3 = (uq.j) deserializationComponentsForJava.f18811d;
            Intrinsics.checkNotNullParameter(deserializationComponentsForJava, "components");
            Intrinsics.checkNotNullParameter(jVar3, "<set-?>");
            deserializedDescriptorResolver.a = jVar3;
            Intrinsics.checkNotNullExpressionValue(EMPTY, "EMPTY");
            sp.h javaResolverCache = sp.h.f18088b;
            Intrinsics.checkNotNullParameter(packageFragmentProvider, "packageFragmentProvider");
            Intrinsics.checkNotNullParameter(javaResolverCache, "javaResolverCache");
            ha.l lVar = new ha.l();
            lVar.f9613d = packageFragmentProvider;
            Intrinsics.checkNotNullParameter(lVar, "<set-?>");
            singleModuleClassResolver.f16831e = lVar;
            hp.o additionalClassPartsProvider = jVar.K();
            hp.o platformDependentDeclarationFilter = jVar.K();
            lh.f samConversionResolver = new lh.f(storageManager, m0Var);
            Intrinsics.checkNotNullParameter(storageManager, "storageManager");
            Intrinsics.checkNotNullParameter(finder, "finder");
            Intrinsics.checkNotNullParameter(moduleDescriptor, "moduleDescriptor");
            Intrinsics.checkNotNullParameter(notFoundClasses, "notFoundClasses");
            Intrinsics.checkNotNullParameter(additionalClassPartsProvider, "additionalClassPartsProvider");
            Intrinsics.checkNotNullParameter(platformDependentDeclarationFilter, "platformDependentDeclarationFilter");
            Intrinsics.checkNotNullParameter(deserializationConfiguration, "deserializationConfiguration");
            Intrinsics.checkNotNullParameter(kotlinTypeChecker, "kotlinTypeChecker");
            Intrinsics.checkNotNullParameter(samConversionResolver, "samConversionResolver");
            hp.q qVar = new hp.q(storageManager, finder, moduleDescriptor);
            qa.t tVar = new qa.t(qVar);
            vq.a aVar = vq.a.f19541m;
            io.sentry.internal.debugmeta.c cVar = new io.sentry.internal.debugmeta.c(moduleDescriptor, notFoundClasses, aVar);
            Intrinsics.checkNotNullExpressionValue(uq.m.a, "DO_NOTHING");
            uq.j jVar4 = new uq.j(storageManager, moduleDescriptor, tVar, cVar, qVar, kotlin.collections.c0.g(new gp.a(storageManager, moduleDescriptor), new hp.g(storageManager, moduleDescriptor)), notFoundClasses, additionalClassPartsProvider, platformDependentDeclarationFilter, aVar.a, kotlinTypeChecker, samConversionResolver, KeyCommandDescriptor.ModifierFlags.CONTROL);
            Intrinsics.checkNotNullParameter(jVar4, "<set-?>");
            qVar.f10192c = jVar4;
            moduleDescriptor.B0(moduleDescriptor);
            lp.k providerForModuleContent = new lp.k(kotlin.collections.c0.g(packageFragmentProvider, qVar), "CompositeProvider@RuntimeModuleData for " + moduleDescriptor);
            Intrinsics.checkNotNullParameter(providerForModuleContent, "providerForModuleContent");
            moduleDescriptor.F = providerForModuleContent;
            Intrinsics.checkNotNullParameter(deserializationComponentsForJava, "deserializationComponentsForJava");
            Intrinsics.checkNotNullParameter(deserializedDescriptorResolver, "deserializedDescriptorResolver");
            np.e eVar2 = new np.e(jVar3, new k2.r(deserializedDescriptorResolver, kotlinClassFinder));
            while (true) {
                d2 d2Var3 = d2Var2;
                ?? r33 = r32;
                WeakReference weakReference2 = (WeakReference) r33.putIfAbsent(d2Var3, new WeakReference(eVar2));
                if (weakReference2 == null) {
                    return eVar2;
                }
                np.e eVar3 = (np.e) weakReference2.get();
                if (eVar3 != null) {
                    return eVar3;
                }
                r33.remove(d2Var3, weakReference2);
                d2Var2 = d2Var3;
                r32 = r33;
            }
        } finally {
        }
    }
}
