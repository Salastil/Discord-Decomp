package ar;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class k {
    public static final k E;
    public static final k F;
    public static final k G;
    public static final k H;
    public static final k I;
    public static final k J;
    public static final k K;
    public static final k L;
    public static final k M;
    public static final k N;
    public static final k O;
    public static final k P;
    public static final k Q;
    public static final k R;
    public static final k S;
    public static final k T;
    public static final k U;
    public static final k V;
    public static final k W;
    public static final k X;
    public static final k Y;
    public static final k Z;
    public static final k a0;

    /* renamed from: b0, reason: collision with root package name */
    public static final k f2683b0;

    /* renamed from: c0, reason: collision with root package name */
    public static final /* synthetic */ k[] f2684c0;

    /* renamed from: i, reason: collision with root package name */
    public static final k f2685i;

    /* renamed from: v, reason: collision with root package name */
    public static final k f2686v;

    /* renamed from: w, reason: collision with root package name */
    public static final k f2687w;

    /* renamed from: x, reason: collision with root package name */
    public static final k f2688x;

    /* renamed from: y, reason: collision with root package name */
    public static final k f2689y;

    /* renamed from: d, reason: collision with root package name */
    public final String f2690d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f2691e;

    static {
        k kVar = new k("UNRESOLVED_TYPE", 0, "Unresolved type for %s", true);
        k kVar2 = new k("UNRESOLVED_TYPE_PARAMETER_TYPE", 1, "Unresolved type parameter type", true);
        k kVar3 = new k("UNRESOLVED_CLASS_TYPE", 2, "Unresolved class %s", true);
        k kVar4 = new k("UNRESOLVED_JAVA_CLASS", 3, "Unresolved java class %s", true);
        f2685i = kVar4;
        k kVar5 = new k("UNRESOLVED_DECLARATION", 4, "Unresolved declaration %s", true);
        k kVar6 = new k("UNRESOLVED_KCLASS_CONSTANT_VALUE", 5, "Unresolved type for %s (arrayDimensions=%s)", true);
        f2686v = kVar6;
        k kVar7 = new k("UNRESOLVED_TYPE_ALIAS", 6, "Unresolved type alias %s", false);
        k kVar8 = new k("RETURN_TYPE", 7, "Return type for %s cannot be resolved", false);
        k kVar9 = new k("RETURN_TYPE_FOR_FUNCTION", 8, "Return type for function cannot be resolved", false);
        f2687w = kVar9;
        k kVar10 = new k("RETURN_TYPE_FOR_PROPERTY", 9, "Return type for property %s cannot be resolved", false);
        k kVar11 = new k("RETURN_TYPE_FOR_CONSTRUCTOR", 10, "Return type for constructor %s cannot be resolved", false);
        k kVar12 = new k("IMPLICIT_RETURN_TYPE_FOR_FUNCTION", 11, "Implicit return type for function %s cannot be resolved", false);
        k kVar13 = new k("IMPLICIT_RETURN_TYPE_FOR_PROPERTY", 12, "Implicit return type for property %s cannot be resolved", false);
        k kVar14 = new k("IMPLICIT_RETURN_TYPE_FOR_PROPERTY_ACCESSOR", 13, "Implicit return type for property accessor %s cannot be resolved", false);
        k kVar15 = new k("ERROR_TYPE_FOR_DESTRUCTURING_COMPONENT", 14, "%s() return type", false);
        k kVar16 = new k("RECURSIVE_TYPE", 15, "Recursive type", false);
        k kVar17 = new k("RECURSIVE_TYPE_ALIAS", 16, "Recursive type alias %s", false);
        f2688x = kVar17;
        k kVar18 = new k("RECURSIVE_ANNOTATION_TYPE", 17, "Recursive annotation's type", false);
        k kVar19 = new k("CYCLIC_UPPER_BOUNDS", 18, "Cyclic upper bounds", false);
        f2689y = kVar19;
        k kVar20 = new k("CYCLIC_SUPERTYPES", 19, "Cyclic supertypes", false);
        E = kVar20;
        k kVar21 = new k("UNINFERRED_LAMBDA_CONTEXT_RECEIVER_TYPE", 20, "Cannot infer a lambda context receiver type", false);
        k kVar22 = new k("UNINFERRED_LAMBDA_PARAMETER_TYPE", 21, "Cannot infer a lambda parameter type", false);
        F = kVar22;
        k kVar23 = new k("UNINFERRED_TYPE_VARIABLE", 22, "Cannot infer a type variable %s", false);
        G = kVar23;
        k kVar24 = new k("RESOLUTION_ERROR_TYPE", 23, "Resolution error type (%s)", false);
        k kVar25 = new k("ERROR_EXPECTED_TYPE", 24, "Error expected type", false);
        k kVar26 = new k("ERROR_DATA_FLOW_TYPE", 25, "Error type for data flow", false);
        k kVar27 = new k("ERROR_WHILE_RECONSTRUCTING_BARE_TYPE", 26, "Failed to reconstruct type %s", false);
        k kVar28 = new k("UNABLE_TO_SUBSTITUTE_TYPE", 27, "Unable to substitute type (%s)", false);
        H = kVar28;
        k kVar29 = new k("DONT_CARE", 28, "Special DONT_CARE type", false);
        I = kVar29;
        k kVar30 = new k("STUB_TYPE", 29, "Stub type %s", false);
        k kVar31 = new k("FUNCTION_PLACEHOLDER_TYPE", 30, "Function placeholder type (arguments: %s)", false);
        k kVar32 = new k("TYPE_FOR_COMPILER_EXCEPTION", 31, "Error type for a compiler exception while analyzing %s", false);
        k kVar33 = new k("ERROR_FLEXIBLE_TYPE", 32, "Error java flexible type with id %s. (%s..%s)", false);
        J = kVar33;
        k kVar34 = new k("ERROR_RAW_TYPE", 33, "Error raw type %s", false);
        K = kVar34;
        k kVar35 = new k("TYPE_WITH_MISMATCHED_TYPE_ARGUMENTS_AND_PARAMETERS", 34, "Inconsistent type %s (parameters.size = %s, arguments.size = %s)", false);
        k kVar36 = new k("ILLEGAL_TYPE_RANGE_FOR_DYNAMIC", 35, "Illegal type range for dynamic type %s..%s", false);
        k kVar37 = new k("CANNOT_LOAD_DESERIALIZE_TYPE_PARAMETER", 36, "Unknown type parameter %s. Please try recompiling module containing \"%s\"", false);
        L = kVar37;
        k kVar38 = new k("CANNOT_LOAD_DESERIALIZE_TYPE_PARAMETER_BY_NAME", 37, "Couldn't deserialize type parameter %s in %s", false);
        M = kVar38;
        k kVar39 = new k("INCONSISTENT_SUSPEND_FUNCTION", 38, "Inconsistent suspend function type in metadata with constructor %s", false);
        N = kVar39;
        k kVar40 = new k("UNEXPECTED_FLEXIBLE_TYPE_ID", 39, "Unexpected id of a flexible type %s. (%s..%s)", false);
        k kVar41 = new k("UNKNOWN_TYPE", 40, "Unknown type", false);
        O = kVar41;
        k kVar42 = new k("NO_TYPE_SPECIFIED", 41, "No type specified for %s", false);
        k kVar43 = new k("NO_TYPE_FOR_LOOP_RANGE", 42, "Loop range has no type", false);
        k kVar44 = new k("NO_TYPE_FOR_LOOP_PARAMETER", 43, "Loop parameter has no type", false);
        k kVar45 = new k("MISSED_TYPE_FOR_PARAMETER", 44, "Missed a type for a value parameter %s", false);
        k kVar46 = new k("MISSED_TYPE_ARGUMENT_FOR_TYPE_PARAMETER", 45, "Missed a type argument for a type parameter %s", false);
        P = kVar46;
        k kVar47 = new k("PARSE_ERROR_ARGUMENT", 46, "Error type for parse error argument %s", false);
        k kVar48 = new k("STAR_PROJECTION_IN_CALL", 47, "Error type for star projection directly passing as a call type argument", false);
        k kVar49 = new k("PROHIBITED_DYNAMIC_TYPE", 48, "Dynamic type in a not allowed context", false);
        k kVar50 = new k("NOT_ANNOTATION_TYPE_IN_ANNOTATION_CONTEXT", 49, "Not an annotation type %s in the annotation context", false);
        k kVar51 = new k("UNIT_RETURN_TYPE_FOR_INC_DEC", 50, "Unit type returned by inc or dec", false);
        k kVar52 = new k("RETURN_NOT_ALLOWED", 51, "Return not allowed", false);
        k kVar53 = new k("UNRESOLVED_PARCEL_TYPE", 52, "Unresolved 'Parcel' type", true);
        k kVar54 = new k("KAPT_ERROR_TYPE", 53, "Kapt error type", false);
        k kVar55 = new k("SYNTHETIC_ELEMENT_ERROR_TYPE", 54, "Error type for synthetic element", false);
        k kVar56 = new k("AD_HOC_ERROR_TYPE_FOR_LIGHTER_CLASSES_RESOLVE", 55, "Error type in ad hoc resolve for lighter classes", false);
        k kVar57 = new k("ERROR_EXPRESSION_TYPE", 56, "Error expression type", false);
        k kVar58 = new k("ERROR_RECEIVER_TYPE", 57, "Error receiver type for %s", false);
        k kVar59 = new k("ERROR_CONSTANT_VALUE", 58, "Error constant value %s", false);
        Q = kVar59;
        k kVar60 = new k("EMPTY_CALLABLE_REFERENCE", 59, "Empty callable reference", false);
        k kVar61 = new k("UNSUPPORTED_CALLABLE_REFERENCE_TYPE", 60, "Unsupported callable reference type %s", false);
        k kVar62 = new k("TYPE_FOR_DELEGATION", 61, "Error delegation type for %s", false);
        k kVar63 = new k("UNAVAILABLE_TYPE_FOR_DECLARATION", 62, "Type is unavailable for declaration %s", false);
        k kVar64 = new k("ERROR_TYPE_PARAMETER", 63, "Error type parameter", false);
        k kVar65 = new k("ERROR_TYPE_PROJECTION", 64, "Error type projection", false);
        k kVar66 = new k("ERROR_SUPER_TYPE", 65, "Error super type", false);
        k kVar67 = new k("SUPER_TYPE_FOR_ERROR_TYPE", 66, "Supertype of error type %s", false);
        k kVar68 = new k("ERROR_PROPERTY_TYPE", 67, "Error property type", false);
        R = kVar68;
        k kVar69 = new k("ERROR_CLASS", 68, "Error class", false);
        S = kVar69;
        k kVar70 = new k("TYPE_FOR_ERROR_TYPE_CONSTRUCTOR", 69, "Type for error type constructor (%s)", false);
        T = kVar70;
        k kVar71 = new k("INTERSECTION_OF_ERROR_TYPES", 70, "Intersection of error types %s", false);
        U = kVar71;
        k kVar72 = new k("CANNOT_COMPUTE_ERASED_BOUND", 71, "Cannot compute erased upper bound of a type parameter %s", false);
        V = kVar72;
        k kVar73 = new k("NOT_FOUND_UNSIGNED_TYPE", 72, "Unsigned type %s not found", false);
        W = kVar73;
        k kVar74 = new k("ERROR_ENUM_TYPE", 73, "Not found the corresponding enum class for given enum entry %s.%s", false);
        X = kVar74;
        k kVar75 = new k("NO_RECORDED_TYPE", 74, "Not found recorded type for %s", false);
        Y = kVar75;
        k kVar76 = new k("NOT_FOUND_DESCRIPTOR_FOR_FUNCTION", 75, "Descriptor not found for function %s", false);
        k kVar77 = new k("NOT_FOUND_DESCRIPTOR_FOR_CLASS", 76, "Cannot build class type, descriptor not found for builder %s", false);
        k kVar78 = new k("NOT_FOUND_DESCRIPTOR_FOR_TYPE_PARAMETER", 77, "Cannot build type parameter type, descriptor not found for builder %s", false);
        k kVar79 = new k("UNMAPPED_ANNOTATION_TARGET_TYPE", 78, "Type for unmapped Java annotation target to Kotlin one", false);
        Z = kVar79;
        k kVar80 = new k("UNKNOWN_ARRAY_ELEMENT_TYPE_OF_ANNOTATION_ARGUMENT", 79, "Unknown type for an array element of a java annotation argument", false);
        a0 = kVar80;
        k kVar81 = new k("NOT_FOUND_FQNAME_FOR_JAVA_ANNOTATION", 80, "No fqName for annotation %s", false);
        f2683b0 = kVar81;
        k[] kVarArr = {kVar, kVar2, kVar3, kVar4, kVar5, kVar6, kVar7, kVar8, kVar9, kVar10, kVar11, kVar12, kVar13, kVar14, kVar15, kVar16, kVar17, kVar18, kVar19, kVar20, kVar21, kVar22, kVar23, kVar24, kVar25, kVar26, kVar27, kVar28, kVar29, kVar30, kVar31, kVar32, kVar33, kVar34, kVar35, kVar36, kVar37, kVar38, kVar39, kVar40, kVar41, kVar42, kVar43, kVar44, kVar45, kVar46, kVar47, kVar48, kVar49, kVar50, kVar51, kVar52, kVar53, kVar54, kVar55, kVar56, kVar57, kVar58, kVar59, kVar60, kVar61, kVar62, kVar63, kVar64, kVar65, kVar66, kVar67, kVar68, kVar69, kVar70, kVar71, kVar72, kVar73, kVar74, kVar75, kVar76, kVar77, kVar78, kVar79, kVar80, kVar81, new k("NOT_FOUND_FQNAME", 81, "No fqName for %s", false), new k("TYPE_FOR_GENERATED_ERROR_EXPRESSION", 82, "Type for generated error expression", false)};
        f2684c0 = kVarArr;
        ki.b.p(kVarArr);
    }

    public k(String str, int i5, String str2, boolean z5) {
        this.f2690d = str2;
        this.f2691e = z5;
    }

    public static k valueOf(String str) {
        return (k) Enum.valueOf(k.class, str);
    }

    public static k[] values() {
        return (k[]) f2684c0.clone();
    }
}
