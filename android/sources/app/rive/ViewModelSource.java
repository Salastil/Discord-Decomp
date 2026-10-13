package app.rive;

import app.rive.ViewModelInstanceSource;
import com.discord.jank_stats.JankRecordStore;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\bv\u0018\u00002\u00020\u0001:\u0002\b\tJ\b\u0010\u0002\u001a\u00020\u0003H\u0016J\b\u0010\u0004\u001a\u00020\u0003H\u0016J\u0010\u0010\u0005\u001a\u00020\u00032\u0006\u0010\u0006\u001a\u00020\u0007H\u0016\u0082\u0001\u0002\n\u000b¨\u0006\f"}, d2 = {"Lapp/rive/ViewModelSource;", "", "blankInstance", "Lapp/rive/ViewModelInstanceSource;", "defaultInstance", "namedInstance", "instanceName", "", "DefaultForArtboard", "Named", "Lapp/rive/ViewModelSource$DefaultForArtboard;", "Lapp/rive/ViewModelSource$Named;", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public interface ViewModelSource {

    @Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\b\u0087@\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000bHÖ\u0003¢\u0006\u0004\b\f\u0010\rJ\u0010\u0010\u000e\u001a\u00020\u000fHÖ\u0001¢\u0006\u0004\b\u0010\u0010\u0011J\u0010\u0010\u0012\u001a\u00020\u0013HÖ\u0001¢\u0006\u0004\b\u0014\u0010\u0015R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0016"}, d2 = {"Lapp/rive/ViewModelSource$DefaultForArtboard;", "Lapp/rive/ViewModelSource;", "artboard", "Lapp/rive/Artboard;", "constructor-impl", "(Lapp/rive/Artboard;)Lapp/rive/Artboard;", "getArtboard", "()Lapp/rive/Artboard;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "equals-impl", "(Lapp/rive/Artboard;Ljava/lang/Object;)Z", "hashCode", "", "hashCode-impl", "(Lapp/rive/Artboard;)I", "toString", "", "toString-impl", "(Lapp/rive/Artboard;)Ljava/lang/String;", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class DefaultForArtboard implements ViewModelSource {

        @NotNull
        private final Artboard artboard;

        private /* synthetic */ DefaultForArtboard(Artboard artboard) {
            this.artboard = artboard;
        }

        @NotNull
        /* renamed from: blankInstance-impl, reason: not valid java name */
        public static ViewModelInstanceSource m84blankInstanceimpl(Artboard artboard) {
            return m85boximpl(artboard).blankInstance();
        }

        /* renamed from: box-impl, reason: not valid java name */
        public static final /* synthetic */ DefaultForArtboard m85boximpl(Artboard artboard) {
            return new DefaultForArtboard(artboard);
        }

        @NotNull
        /* renamed from: constructor-impl, reason: not valid java name */
        public static Artboard m86constructorimpl(@NotNull Artboard artboard) {
            Intrinsics.checkNotNullParameter(artboard, "artboard");
            return artboard;
        }

        @NotNull
        /* renamed from: defaultInstance-impl, reason: not valid java name */
        public static ViewModelInstanceSource m87defaultInstanceimpl(Artboard artboard) {
            return m85boximpl(artboard).defaultInstance();
        }

        /* renamed from: equals-impl, reason: not valid java name */
        public static boolean m88equalsimpl(Artboard artboard, Object obj) {
            return (obj instanceof DefaultForArtboard) && Intrinsics.areEqual(artboard, ((DefaultForArtboard) obj).m93unboximpl());
        }

        /* renamed from: equals-impl0, reason: not valid java name */
        public static final boolean m89equalsimpl0(Artboard artboard, Artboard artboard2) {
            return Intrinsics.areEqual(artboard, artboard2);
        }

        /* renamed from: hashCode-impl, reason: not valid java name */
        public static int m90hashCodeimpl(Artboard artboard) {
            return artboard.hashCode();
        }

        @NotNull
        /* renamed from: namedInstance-impl, reason: not valid java name */
        public static ViewModelInstanceSource m91namedInstanceimpl(Artboard artboard, @NotNull String instanceName) {
            Intrinsics.checkNotNullParameter(instanceName, "instanceName");
            return m85boximpl(artboard).namedInstance(instanceName);
        }

        /* renamed from: toString-impl, reason: not valid java name */
        public static String m92toStringimpl(Artboard artboard) {
            return "DefaultForArtboard(artboard=" + artboard + ")";
        }

        @Override // app.rive.ViewModelSource
        @NotNull
        public ViewModelInstanceSource blankInstance() {
            return DefaultImpls.blankInstance(this);
        }

        @Override // app.rive.ViewModelSource
        @NotNull
        public ViewModelInstanceSource defaultInstance() {
            return DefaultImpls.defaultInstance(this);
        }

        public boolean equals(Object obj) {
            return m88equalsimpl(this.artboard, obj);
        }

        @NotNull
        public final Artboard getArtboard() {
            return this.artboard;
        }

        public int hashCode() {
            return m90hashCodeimpl(this.artboard);
        }

        @Override // app.rive.ViewModelSource
        @NotNull
        public ViewModelInstanceSource namedInstance(@NotNull String str) {
            return DefaultImpls.namedInstance(this, str);
        }

        public String toString() {
            return m92toStringimpl(this.artboard);
        }

        /* renamed from: unbox-impl, reason: not valid java name */
        public final /* synthetic */ Artboard m93unboximpl() {
            return this.artboard;
        }
    }

    @Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
    public static final class DefaultImpls {
        @NotNull
        public static ViewModelInstanceSource blankInstance(@NotNull ViewModelSource viewModelSource) {
            return ViewModelInstanceSource.Blank.m70boximpl(ViewModelInstanceSource.Blank.m71constructorimpl(viewModelSource));
        }

        @NotNull
        public static ViewModelInstanceSource defaultInstance(@NotNull ViewModelSource viewModelSource) {
            return ViewModelInstanceSource.Default.m77boximpl(ViewModelInstanceSource.Default.m78constructorimpl(viewModelSource));
        }

        @NotNull
        public static ViewModelInstanceSource namedInstance(@NotNull ViewModelSource viewModelSource, @NotNull String instanceName) {
            Intrinsics.checkNotNullParameter(instanceName, "instanceName");
            return new ViewModelInstanceSource.Named(viewModelSource, instanceName);
        }
    }

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0005\b\u0087@\u0018\u00002\u00020\u0001B\u000f\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0004\b\u0004\u0010\u0005J\u001a\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\u000bHÖ\u0003¢\u0006\u0004\b\f\u0010\rJ\u0010\u0010\u000e\u001a\u00020\u000fHÖ\u0001¢\u0006\u0004\b\u0010\u0010\u0011J\u0010\u0010\u0012\u001a\u00020\u0003HÖ\u0001¢\u0006\u0004\b\u0013\u0010\u0005R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007\u0088\u0001\u0002¨\u0006\u0014"}, d2 = {"Lapp/rive/ViewModelSource$Named;", "Lapp/rive/ViewModelSource;", "viewModelName", "", "constructor-impl", "(Ljava/lang/String;)Ljava/lang/String;", "getViewModelName", "()Ljava/lang/String;", "equals", "", JankRecordStore.SCREEN_OTHER, "", "equals-impl", "(Ljava/lang/String;Ljava/lang/Object;)Z", "hashCode", "", "hashCode-impl", "(Ljava/lang/String;)I", "toString", "toString-impl", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Named implements ViewModelSource {

        @NotNull
        private final String viewModelName;

        private /* synthetic */ Named(String str) {
            this.viewModelName = str;
        }

        @NotNull
        /* renamed from: blankInstance-impl, reason: not valid java name */
        public static ViewModelInstanceSource m94blankInstanceimpl(String str) {
            return m95boximpl(str).blankInstance();
        }

        /* renamed from: box-impl, reason: not valid java name */
        public static final /* synthetic */ Named m95boximpl(String str) {
            return new Named(str);
        }

        @NotNull
        /* renamed from: constructor-impl, reason: not valid java name */
        public static String m96constructorimpl(@NotNull String viewModelName) {
            Intrinsics.checkNotNullParameter(viewModelName, "viewModelName");
            return viewModelName;
        }

        @NotNull
        /* renamed from: defaultInstance-impl, reason: not valid java name */
        public static ViewModelInstanceSource m97defaultInstanceimpl(String str) {
            return m95boximpl(str).defaultInstance();
        }

        /* renamed from: equals-impl, reason: not valid java name */
        public static boolean m98equalsimpl(String str, Object obj) {
            return (obj instanceof Named) && Intrinsics.areEqual(str, ((Named) obj).m103unboximpl());
        }

        /* renamed from: equals-impl0, reason: not valid java name */
        public static final boolean m99equalsimpl0(String str, String str2) {
            return Intrinsics.areEqual(str, str2);
        }

        /* renamed from: hashCode-impl, reason: not valid java name */
        public static int m100hashCodeimpl(String str) {
            return str.hashCode();
        }

        @NotNull
        /* renamed from: namedInstance-impl, reason: not valid java name */
        public static ViewModelInstanceSource m101namedInstanceimpl(String str, @NotNull String instanceName) {
            Intrinsics.checkNotNullParameter(instanceName, "instanceName");
            return m95boximpl(str).namedInstance(instanceName);
        }

        /* renamed from: toString-impl, reason: not valid java name */
        public static String m102toStringimpl(String str) {
            return h.f("Named(viewModelName=", str, ")");
        }

        @Override // app.rive.ViewModelSource
        @NotNull
        public ViewModelInstanceSource blankInstance() {
            return DefaultImpls.blankInstance(this);
        }

        @Override // app.rive.ViewModelSource
        @NotNull
        public ViewModelInstanceSource defaultInstance() {
            return DefaultImpls.defaultInstance(this);
        }

        public boolean equals(Object obj) {
            return m98equalsimpl(this.viewModelName, obj);
        }

        @NotNull
        public final String getViewModelName() {
            return this.viewModelName;
        }

        public int hashCode() {
            return m100hashCodeimpl(this.viewModelName);
        }

        @Override // app.rive.ViewModelSource
        @NotNull
        public ViewModelInstanceSource namedInstance(@NotNull String str) {
            return DefaultImpls.namedInstance(this, str);
        }

        public String toString() {
            return m102toStringimpl(this.viewModelName);
        }

        /* renamed from: unbox-impl, reason: not valid java name */
        public final /* synthetic */ String m103unboximpl() {
            return this.viewModelName;
        }
    }

    @NotNull
    ViewModelInstanceSource blankInstance();

    @NotNull
    ViewModelInstanceSource defaultInstance();

    @NotNull
    ViewModelInstanceSource namedInstance(@NotNull String instanceName);
}
